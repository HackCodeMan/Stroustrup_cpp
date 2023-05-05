#include <iostream>
#include <cmath> // для вычесления квадратного корня


int main()
{
    using namespace std;
    cout << "Введите число: " << endl;
    int n;
    cin >> n;
    cout << "n == " << n << endl
    << "n+1 == " << n + 1 << endl
    << "три раза по n == " << n * 3 << endl
    << "n в квадрате == " << n * n << endl
    << "Половина n == " << n / 2 << endl // Целочисленное значение
    << "корень квадратный из n == " << sqrt(n) << endl
    << "Остаток от деления на 2: " << n % 2 << endl;
}