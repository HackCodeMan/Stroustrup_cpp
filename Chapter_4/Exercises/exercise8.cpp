#include <iostream>
#include <windows.h>
#include <vector>


int main(int argc, char const *argv[])
{
    using namespace std;
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    const vector <int> max_n_grains = {1000, 1000000, 1000000000};
    int n_cell = 0, n_grain = 1, sum = 1;
    for (int i : max_n_grains)
    {
        while (sum <= i)
        {
            n_grain *= 2;
            sum += n_grain;
            n_cell++;
        }
        cout << "Изобретатель получил " << sum << "(>=" << i << ") зерен риса на "  << n_cell << " клетке\n";
    }
    return 0;
}
