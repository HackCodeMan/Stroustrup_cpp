#include <vector>
#include <iostream>
#include <algorithm>
#include <windows.h>
typedef std::vector < std::pair <int, int> > int_pairs_in_vector;


std::vector <int> input_values()
{
    std::vector <int> nums;
    for (int num; std::cin >> num;)
    {
        nums.push_back(num);
    }
    return nums;
}

int find_n_num_in_vector(std::vector <int> nums, int find_num)
{
    int n = 0;
    for (int num : nums) if (num == find_num) n++;
    return n;
}

int_pairs_in_vector find_n_of_nums(std::vector <int> nums)
{
    int_pairs_in_vector nums_and_ns;
    for (int num : nums)
    { 
        if (std::find(nums.begin(), nums.end(), num) != nums.end())
        {
            std::pair < int, int > num_and_n;
            num_and_n.first = num;
            num_and_n.second = find_n_num_in_vector(nums, num);
            nums_and_ns.push_back(num_and_n);
        }
    }   
    return nums_and_ns;
}

int find_max_element(int_pairs_in_vector nums_and_ns)
{
    int max_n_element;
    std::vector <int> ns;
    for (std::pair <int, int> num_and_n : nums_and_ns) ns.push_back(num_and_n.second);
    max_n_element = *std::max_element(ns.begin(),ns.end());
    return max_n_element;
}

std::vector <int> find_modas(int_pairs_in_vector nums_and_ns, int max_n_element)
{
    std::vector <int> modas;
    for (std::pair <int, int> num_and_n : nums_and_ns)
    {
        if (std::find(modas.begin(), modas.end(), num_and_n.first) == modas.end())
        {
            if (num_and_n.second == max_n_element)
                {
                    modas.push_back(num_and_n.first);
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
    int_pairs_in_vector nums_and_ns = find_n_of_nums(input_nums);
    int max_element = find_max_element(nums_and_ns);
    std::vector <int> modas = find_modas(nums_and_ns, max_element);
    for (int moda : modas)
    {
        cout << "Мода последовательности чисел равна " << moda << endl;
    }
    return 0;
}
