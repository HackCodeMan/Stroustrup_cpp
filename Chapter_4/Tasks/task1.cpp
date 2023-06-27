#include <iostream>
int main(int argc, char const *argv[])
{
    using namespace std;
    char endgame;
    while(endgame != '|')
    {
        int num1, num2;
        cin >> num1 >> num2;
        cout << num1 << "\n" << num2 << endl;
        cin >> endgame;
    }
    
    return 0;
}
