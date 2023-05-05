// ex 5,6,7
#include "std_lib_facilities.h"


int main(int argc, char const *argv[])
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if ((age > 0)&&(age < 110))
    {
        cout << "Я слышал, что ты отметил день рождения и тебе исполнилось " << age << endl;
        cout << "А на следующий год тебе исполнится " << age + 1 << " лет\n";
        if (age + 1 == 18) {cout << "В следующем году ты сможешь голосовать\n";}
        if (age >= 70) {cout << "Надеюсь ты не скучаешь на пенсии\n";}
        
        string my_name;
        cout << "\n\n\t\tИскренне твой ";
        cin >> my_name;

    }
    else
    {
        // simple_error("ты шутишь");
        cerr << "error: ты шутишь\n"; // Поток ошибок
        exit(1);
    }
    return 0;
}
