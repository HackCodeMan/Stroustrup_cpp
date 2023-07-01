#include <iostream>
#include <vector>


int main(int argc, char const *argv[])
{
    using namespace std;
    const vector < pair <int, string> > range0_9 {{0, "zero"},{1, "one"},{2, "two"},{3, "three"},
    {4, "four"},{5, "five"},{6, "six"},{7, "seven"},{8, "eight"},{9, "nine"}};

    string user_input_num;
    cin >> user_input_num;
    string answer;
    for(pair <int, string> i : range0_9)
    {
        if (stoi(user_input_num) == i.first)
        {
            answer = i.second;
        }
    }
    // for(pair <int, string> i : range0_9)
    // {
    //     if (user_input_num == i.second)
    //     {
    //         answer = i.first;
    //     }
    // }
    cout << answer << endl;
    return 0;
}
