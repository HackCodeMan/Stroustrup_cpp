#include <iostream> // Работа со стандартными потоками
#include <cmath>  // Работа с математическими операциями (sqrt())


void operSqrt()
    //Демонстрирует работу функции корня
{
    std::cout << "Enter the number: ";
    int num;
    std::cin >> num;
    std::cout << "Enter the real number: ";
    double realnum;
    std::cin >> realnum;
    std::cout << "sqrt your number: " << std::sqrt(num) << std::endl;
    std::cout << "sqrt your real number: " << std::sqrt(realnum) << std::endl;
}

void division()
{
    using namespace std;
    int a; double b;
    a = 5;
    cout << "5/2 == " << a/2 << endl; // 2
    b = a/2;
    cout << "5/2 == " << b << endl; // 2
    // Нет разницы в какого типа переменную мы запишем значение выражения
}


int main(){operSqrt();}