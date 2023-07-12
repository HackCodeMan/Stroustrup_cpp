#include <iostream>
#include <windows.h>
#include <vector>
#include <cmath>

#include "make_vector_in_range.h"
#include "find_prime_nums.h"
#include "del_excess.h"

template <typename T1>
void display_vctr(std::vector <T1> vctr)
{
    for (T1 item : vctr) std::cout << item << " ";
    std::cout << std::endl;
}

int main(int argc, char const *argv[])
{
    using namespace std;
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int n;
    cout << "Введите n и я покажу n первых простых чисел\nВаш ответ: ";
    cin >> n;
    vector <int> range_nums = make_vector_in_range(1, pow(n, 1.5));
    cout << "Я создал последовательность чисел:\n";
    display_vctr(range_nums);
    cout << "\n\nСейчас я его отфильтрую \n\n\n";
    vector <int> prime_nums = find_prime_nums(range_nums);
    prime_nums = del_0_vector(prime_nums, n);
    prime_nums = conversion_to_desired_amount(prime_nums, n);
    cout << "Вот результат:\n";
    display_vctr(prime_nums);
    return 0;
}
