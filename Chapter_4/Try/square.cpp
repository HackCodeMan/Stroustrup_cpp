#include <iostream>
void keep_windows_open(){int kk; std::cin >> kk;}
int square(int number)
{
	int result;
	for (int i = 0; i < number; i++)
	{
		result = result += number;
	}
	return result;
}

int main(int argc, char const *argv[])
{
	std::cout << square(25) << std::endl;
	keep_windows_open();
	return 0;
}