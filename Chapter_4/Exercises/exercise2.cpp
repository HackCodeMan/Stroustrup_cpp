#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>
int main(int argc, char const *argv[])
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    using namespace std;
    vector <double> temps;
    for(double temp; cin >> temp;) temps.push_back(temp);

    double sum{0};
    for  (double x : temps) sum += x;
    cout << "Средняя температура: " << sum/temps.size() << endl;

    sort(temps.begin(), temps.end());
    if (temps.size() % 2 != 0) cout << "Медианная температура: " << temps[temps.size()/2] << endl;
    else if (temps.size() % 2 == 0)
    {
        for (double i : temps) cout << i << " ";
        int middle_first = temps.size()/2 - 1;
        int middle_second = temps.size()/2;
        cout << "Медианная температура: " << (temps[middle_first] + temps[middle_second])/2 << endl;
    }
    
    return 0;
}
