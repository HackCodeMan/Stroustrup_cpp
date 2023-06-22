#include <iostream>
#include <vector>
#include <windows.h>
#include <cmath>
using namespace std;

pair<double, string> str_to_num_si(string str)
{
    double result_num; string result_unit;

    const string numbers = "0123456789";
    const string letters = "cminft";
    int n_num{0};
    int n_let{0};
    bool is_second_part_num = false;
    for (int i = 0; i < str.length(); i++)
    {
      if (numbers.find(str[i]) - n_num != 0)
      {
        if (!is_second_part_num)
        {
          result_num += (double)(str[i]) * pow(10, i);
          n_num++;
        }else if (is_second_part_num)
        {
          result_num += (double)(str[i]) * pow(10, -i);
          n_num++;
        }
      } else if (letters.find(str[i]) != 0)
      {
        result_unit += str[i];
        n_let++;
      }else if (str[i] == '.')
      {
        is_second_part_num = true;
        n_num = 0;
      }
    }

    return make_pair(result_num, result_unit);
}

vector< pair <double, string> > strVector_to_numUnitVector(vector<string> input_values)
{
    vector < pair <double, string> > nums_units;
    for(string i : input_values)
    {
        pair <double, string> num_unit = str_to_num_si(i);
        nums_units.push_back(num_unit);
    }
    return nums_units;
}

vector<string> input_val()
{
    vector<string> values;
    string value;
    while (value != "|")
    {
        cin >> value;
        if (value == "|") continue;
        values.push_back(value);
    } 
    return values;
}


int main(int argc, char const *argv[])
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    vector<string> strings_num_si = input_val();
    vector< pair <double, string> > nums_units = strVector_to_numUnitVector(strings_num_si);
    
    for (pair <double, string> i : nums_units)
    {
      cout << i.first << " " << i.second << endl;
    }
    return 0;
}