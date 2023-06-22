#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>

std::vector<double> input_val()
{
    using namespace std;
    vector<double> values;
    string value;
    for(int i = 0; i < 2; i++)
    {
        cin >> value;
        values.push_back(stoi(value));
    } 
    return values;
}

int main(int argc, char const *argv[])
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    using namespace std;
    vector<double> nums = input_val();
    
    for (int i; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }
    if (nums[0] != nums[1])
    {
        int max = *max_element(nums.begin(), nums.end());
        int min = *min_element(nums.begin(), nums.end());
        cout << "Наименьшее значение равно: " << min << endl
        << "Наибольшее значение равно: " << max << endl;
    }
    return 0;
}
