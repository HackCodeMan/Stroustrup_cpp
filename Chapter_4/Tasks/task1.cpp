#include <iostream>
using namespace std;


void exit_programm()
{
    char str {0};
    while (str != '|')
    {
        cin >> str;
    }
}

int main(int argc, char const *argv[])
{
    int i {0};
    while (i != 2)
    {
        int num {0};
        cin >> num;
        cout << num << endl;
        i++;
    }
    exit_programm();
    return 0;
}
