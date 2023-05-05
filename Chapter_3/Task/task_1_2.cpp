#include <iostream>


int main(int argc, char const *argv[])
{
	using namespace std;

	string name;

	cout << "Введите имя адресата: ";
	getline(cin, name);

	cout << "Здравствуйте, дорогой\\ая " << name <<  "!\n"
	<< "Как дела?";
	string mood;
	getline(cin, mood);

	cout << "У меня такое же настроение!" << endl;

	return 0;
}