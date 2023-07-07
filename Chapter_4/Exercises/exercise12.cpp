#include <windows.h>
#include <vector>
#include <iostream>
bool is_easy_num(int num)
{
    bool is_easy_num = false;
    std::vector <int> i_dividers = {1, num};
    for (int j = 2; j < num; j++) if (num % j == 0) i_dividers.push_back(j);
    if (i_dividers.size() == 2) is_easy_num = true;
    return is_easy_num;
}
std::vector <int> find_easy_nums_in_range(int begin_range, int end_range)
{
    std::vector <int> easy_nums;
    for (int i = begin_range; i < end_range; i++)
    {
        if (is_easy_num(i)) easy_nums.push_back(i);
    }
    return easy_nums;

}
int main(int argc, char const *argv[])
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    using namespace std;
    int max;
    cout << "Введи верхнюю границу диапазона: ";
    cin >> max;
    vector <int> easy_nums = find_easy_nums_in_range(1, max);
    for (int easy_num : easy_nums)
    {
        cout << easy_num << endl;
    }
    return 0;
}
