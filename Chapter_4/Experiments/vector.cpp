#include <iostream>
#include <vector>
using namespace std;

void init_vector()
{
	vector<int> numbers = {14,12,67,34,65,90};  //Инициализация вектора
	cout << numbers[0] << endl;  //Обращение к элементам вектора
	vector<string> poems(8); // 8 элементов типа строк в веторе с идентификатором poems
}

void vector_traversal()
{
	vector<int> numbers = {14,12,67,34,65,90};

	//1-вариант
	for (int i = 0; i < numbers.size(); i++) // vector.size() Возвращает размер вектора
	{
		cout << i << endl;
	}
	//2-вариант
	for (int i : numbers) // для каждого int i в numbers
	{
		cout << i << endl;
	}
	return 0;

}
int main(int argc, char const *argv[])
{
	
}