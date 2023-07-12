#include <vector>
#include <iostream>
#include <algorithm>
#include <windows.h>


template <typename T1>
std::vector <T1> input_values()
{
    std::vector <T1> values;
    for (T1 value; std::cin >> value;)
    {
        values.push_back(value);
    }
    return values;
}

template <typename T1>
int find_n_value_in_vector(std::vector <T1> values, T1 find_value)
{
    int n = 0;
    for (T1 value : values) if (value == find_value) n++;
    return n;
}

template <typename T1>
std::vector < std::pair <T1, int> > find_n_of_nums(std::vector <T1> values)
{
    std::vector < std::pair <int, int> > values_and_ns;
    for (int value : values)
    { 
        if (std::find(values.begin(), values.end(), value) != values.end())
        {
            std::pair < T1 , int > value_and_n;
            value_and_n.first = value;
            value_and_n.second = find_n_value_in_vector(values, value);
            values_and_ns.push_back(value_and_n);
        }
    }   
    return values_and_ns;
}

template <typename T1>
int find_max_element(std::vector < std::pair <T1, int> > values_and_ns)
{
    int max_n_element;
    std::vector <int> ns;
    for (std::pair <T1, int> value_and_n : values_and_ns) ns.push_back(value_and_n.second);
    max_n_element = *std::max_element(ns.begin(),ns.end());
    return max_n_element;
}

template <typename T1>
std::vector <int> find_modas(std::vector < std::pair <T1, int> > nums_and_ns, int max_n_element)
{
    std::vector <int> modas;
    for (std::pair <T1 , int> value_and_n : nums_and_ns)
    {
        if (std::find(modas.begin(), modas.end(), value_and_n.first) == modas.end())
        {
            if (value_and_n.second == max_n_element)
                {
                    modas.push_back(value_and_n.first);
                }
        }
    }
    return modas;
}

int main(int argc, char const *argv[])
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    using namespace std;
    vector <int> input_nums = input_values();
    std::vector < std::pair <int, int> > nums_and_ns = find_n_of_nums(input_nums);
    int max_element = find_max_element(nums_and_ns);
    std::vector <int> modas = find_modas(nums_and_ns, max_element);
    for (int moda : modas)
    {
        cout << "Мода последовательности чисел равна " << moda << endl;
    }
    return 0;
}
