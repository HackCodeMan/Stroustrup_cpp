//Простые числа по рещету эратосфена
#include <iostream>
#include <windows.h>
#include <vector>

#include "make_vector_in_range.h"
#include "find_prime_nums.h"
#include "del_0_vector.h"

int main(int argc, char const *argv[])
{
    using namespace std;
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    cout << "Введите количество чисел(n): ";
    long int n;
    cin >> n;
    vector <int> range_n = make_vector_in_range(1, n);
    cout << "Я создал последовательность чисел:\n";
    for (int num : range_n) cout << num << " ";
    cout << std::endl
    << "\n\nСейчас я его отфильтрую \n\n\n";
    vector <int> prime_nums = find_prime_nums(range_n);
    cout << "\nЯ отфильтровал:\n";
    for (int num : prime_nums) cout << num << " ";
    cout << endl;
    prime_nums = del_0_vector(prime_nums);
    cout << "Вот результат:\n";
    for (int num : prime_nums) cout << num << " ";
    cout << endl;
    return 0;
}
