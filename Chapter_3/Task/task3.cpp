#include <iostream>

int main(int argc, char const *argv[])
{
	using namespace std;

	string friend_name;
	cout << "Введите имя вашего друга: ";
	getline(cin, friend_name);
	
	string answer;
	cout << "Давно ли ты встречал " << friend_name << "?\n";
	getline(cin, answer);
	cout << "Я его ваще не видел :)" << "\n";

	return 0;
}