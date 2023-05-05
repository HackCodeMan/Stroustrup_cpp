#include <iostream>


int main(int argc, char const *argv[])
{
    using namespace std;

    string friend_name;
    cout << "Введите имя друга: ";
    cin >> friend_name;

    char friend_sex = 0;
    cout << "Введите пол вашего друга(m/f): ";
    cin >> friend_sex;
    
    if (friend_sex == 'm') {
        cout  << "Если ты увидишь " << friend_name << ", пожалуйста, попроси его позвонить мне\n";
    } else if (friend_sex == 'f') {
        cout << "Если ты увидишь " << friend_name << ", пожалуйста, попроси её позвонить мне\n";
    }

    return 0;
}
