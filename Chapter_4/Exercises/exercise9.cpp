#include <iostream>
#include <windows.h>
#include <vector>


int main(int argc, char const *argv[])
{
    using namespace std;
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    const vector <int> max_n_grains = {1000, 1000000, 1000000000};
    int n_cell = 0, n_grain = 1, sum = 0, last_sum = 0;
    for (n_cell; (n_cell <= 64)&(sum >= last_sum); n_cell++)
    {
        n_grain *= 2;
        last_sum = sum;
        sum += n_grain;
        n_cell++;
    }
    cout << "На " << n_cell << " клетке произошло переполнение\nМаксимальное кол-во зерен в int:" << last_sum << endl;
    return 0;
}