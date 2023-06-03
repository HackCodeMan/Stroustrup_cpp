#include <iostream>
#include <windows.h>
using namespace std;


int main(int argc, char const *argv[])
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    string is_end = "";

    while (is_end != "|")
    {
        int i {0};
        
        double maxim{-2147483648};
        string maxim_unit = "m";

        double minim{2147483648};
        string minim_unit = "m";

        double sum{0};

        while (i != 10)
        {
            double num;
            string unit;
            cin >> num >> unit;
            string str_unit(unit);
            string num_with_si = to_string(num) + str_unit;
            if (unit != "m")
            {
                if (unit == "cm") num /= 100;
                else if (unit == "in") num /= 2.54;
                else if (unit == "ft") num = num * 12 / 2.54;
                else 
                {
                    cerr << "error: Неправильная единица измерения\n\
                    Программа будет завершена((\n";
                    exit(1);
                }
            } unit = "m";
            
            if (num > maxim)
            {
                maxim = num;
                maxim_unit = unit;
                cout << "Наибольшее среди введенных: " << num_with_si << endl;
            }
            
            if (num < minim)
            {
                minim = num;
                minim_unit = unit;
                cout << "Наименьшее среди введенных: " << num_with_si << endl;
            }
            sum += num;
            i++;
        }

    }
    return 0;
}
