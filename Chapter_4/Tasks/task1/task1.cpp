#include <iostream>
#include <vector>
using namespace std;
vector<int> input_val()
{
    using namespace std;
    vector<int> values;
    string value;
    while (value != "|")
    {
        cin >> value;
        if (value == "|") continue;
        values.push_back(stoi(value));
    } 
    return values;
}

int main(int argc, char const *argv[])
{
    using namespace std;
    vector<int> str_nums = input_val();
    
    for (int i; i < str_nums.size(); i++)
    {
        cout << str_nums[i] << endl;
    }
    return 0;
}
