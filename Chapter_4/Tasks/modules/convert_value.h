#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

vector<double, string> convert_str_to_numUnit(string val)
{
    
    vector<double, string> double_unit(2);
    double num;
    string unit;
    const string numbers = "0123456789";
    const string letters = "cminft";

    int n_num{0};
    int n_let{0};
    bool is_second_part_num = false;
    for (int i; i < val.length(); i++)
    {
      if (numbers.find(val[i]) - n_num != 0)
      {
        if (!is_second_part_num)
        {
          num += (int)(val[i]) * pow(10, i);
          n_num++;
        }else if (is_second_part_num)
        {
          num += (int)(val[i]) * pow(10, -i);
          n_num++;
        }
      } else if (letters.find(val[i]) != 0)
      {
        unit += val[i];
        n_let++;
      }else if (val[i] == '.')
      {
        is_second_part_num = true;
        n_num = 0;
      }
    }
    double_unit[0] = num;
    double_unit[1] = unit;
  return double_unit;
}

vector < vector < double,string > > convert_vector(vector<string> values)
{
    vector < vector < double,string > > result;
    return result;
}

vector<int, double>