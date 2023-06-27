#include <iostream>
#include <windows.h>
std::string rm_symbol_end_with_tochka(std::string str, char symbol_delete)
{
  for (int i = str.size() - 1; i > 0; i--)
  {
    if ((str[i] == symbol_delete) || (str[i] == '.'))
    {
      str.erase(i);
    } else if (str[i] != symbol_delete)
    {
      break;
    } 
  }
  return str;
}

int main(int argc, char const *argv[])
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    using namespace std;
    char endgame;
    while(endgame != '|')
    {
        string unit, str_min, str_max;
        double num , max = -999999999, min = 999999999 , koef;
        
        for (int i = 0; i < 2; i++)
        {
            cin >> num >> unit;
            if (unit == "cm") koef = 0.01;
            else if (unit == "in") koef = 0.0254;
            else if (unit == "ft") koef = 0.3048;
            else if (unit == "m") koef = 1;
            else cerr << "ERROR: Неверная единица измерения\n";
            if (num * koef > max)
             {
                max = num * koef;
                str_max = rm_symbol_end_with_tochka(to_string(num), '0') + unit;
             }
            if (num * koef < min)
             {
                min = num * koef;
                str_min = rm_symbol_end_with_tochka(to_string(num), '0') + unit;
             }
        }

            cout << "Наименьшее число равно: " << str_min << endl
            << "Наибольшее число равно: " << str_max << endl;
        
        if (min == max)
        {
            cout << "Числа равны\n";
        }
        if (abs(max - min) < 1.0/100)
        {
            cout << "Числа почти равны\n";
        }
        cout << "sum == " <<  min + max << 'm' << endl;
        cout << "K == 2\n";
        cin >> endgame;
    }
    
    return 0;
}
