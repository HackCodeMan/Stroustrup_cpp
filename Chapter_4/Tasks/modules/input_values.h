#include <iostream>
#include <vector>
using namespace std;
vector<string> input_val()
{
    using namespace std;
    vector<string> values;
    string value;
    while (value != "|")
    {
        cin >> value;
        if (value == "|") continue;
        values.push_back(value);
    } 
    return values;
}
