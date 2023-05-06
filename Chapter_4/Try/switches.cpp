#include <iostream>
void keep_windows_open(){int k; std::cin >> k;}
using namespace std;

int main(int argc, char const *argv[])
{
	constexpr double cm_per_inch = 2.54;

	cout << "Enter length and unit of measure:\n";
	int length = 1;
	char unit = 'a';
	cin >> length >> unit;

	switch (unit)
	{
		case 'i':
			cout << length << "in = " <<
			cm_per_inch * length << "cm" << endl;
			break;
		case 'c':
			cout << length << "cm = " << 
			length/cm_per_inch << "in" << endl;
			break;
	}
	keep_windows_open();
	return 0;
}