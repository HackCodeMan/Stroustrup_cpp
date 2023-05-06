#include <iostream>
void keep_windows_open(){int kk; std::cin >> kk;}
using namespace std;

void while_using()
{
	char start = 'a';
	int i = 0;
	while (i < 26)
	{
		char letter = start + i;
		cout << letter << "\t" << i << endl;
		i++;
	}
	keep_windows_open();
	
}

void using_for()
{
	char start = 'a';
	for (int i; i < 26; i++)
	{
		char letter = start + i;
		cout << letter << "\t" << i << endl;
	}
	keep_windows_open();
	
}
int main(int argc, char const *argv[])
{
	using_for();
	return 0;
}	