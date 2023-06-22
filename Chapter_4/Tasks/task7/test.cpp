#include <iostream>
#include <vector>
#include <windows.h>
#include <cmath>
using namespace std;

pair<double, string> str_to_num_si(string str)
{
    double result_num; string result_unit;

    const string numbers = "0123456789";
    cout << "$numbers == " << numbers << endl;
    const string letters = "cminft";
    cout << "$letters == " << letters << endl;
    int n_num{0};
    cout << "$n_num == " << n_num << endl;
    int n_let{0};
    cout << "$n_let == "<< n_let << endl;
    bool is_second_part_num = false;
    cout << "$is_second_part_num"<< is_second_part_num << endl;
    for (int i = 0; i < str.length(); i++)
    {
      cout << "-----------------------------------------------\n" <<
      "$i  == " << i << endl;
      if (numbers.find(str[i]) - n_num != 0)
      {
        cout << "Условие 1\n";
        if (!is_second_part_num)
        {
          cout << "Условие 1.1\n";
          cout << "str[" << i << "] == " << str[i] << endl;
          cout << "Результат: " << (double)(str[i]) * pow(10, i) << endl;
          result_num += (double)(str[i]) * pow(10, i);
          cout << "$result_num == " << result_num << endl;
          n_num++;
          cout << "$n_num == " << n_num << endl;
          
        }else if (is_second_part_num)
        {
          cout << "Условие 1.2\n";
          cout << "str[" << i << "] == " << str[i] << endl;
          cout << "Результат: " << (double)(str[i]) * pow(10, -i) << endl;
          result_num += (double)(str[i]) * pow(10, -i);
          cout << "$result_num == " << result_num << endl;
          n_num++;
          cout <<"$n_num == "<< n_num << endl;
        }
      } else if (letters.find(str[i]) != 0)
      {
        cout << "Условие 2\n";
        cout << "str[" << i << "] == " << str[i] << endl;
        cout << "Результат: " << str[i] << endl;
        result_unit += str[i];
        cout << "result_unit == " << result_unit << endl;
        n_let++;
        cout << "n_let == " << n_let << endl;
      }else if (str[i] == '.')
      {
        cout << "Условие 3\n";
        is_second_part_num = true;
        cout << "$is_second_part_num"<< is_second_part_num << endl;
        n_num = 0;
        cout <<"$n_num == "<< n_num << endl;
      }
      cout << "-----------------------------------------------\n";
    }
    cout <<  "return result == " << make_pair(result_num, result_unit).first << " "
         << make_pair(result_num, result_unit).second;
    return make_pair(result_num, result_unit);
}

int main(int argc, char const *argv[])
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    const string str = "15m";
    pair<double, string> num_si = str_to_num_si(str);

    cout << num_si.first << " " << num_si.second << endl;
    

    return 0;
}
