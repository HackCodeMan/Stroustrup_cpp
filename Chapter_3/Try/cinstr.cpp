//This programm demostrate the string while(cin>>variable) in my code

#include <iostream>


int main()
{
    using namespace std;

    string previos = "";
    string current;
    while(cin >> current)
    {
        if (current == previos) 
            cout << "Recurring word: " << current << endl;
        previos = current;
        
    }
}