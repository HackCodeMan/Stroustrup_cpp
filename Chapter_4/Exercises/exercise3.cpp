#include <vector>
#include <iostream>
#include <algorithm>

template<typename t1>
t1 sum_vector (std::vector <t1> vals)
{
    double sum;
    for  (double num : vals)
    {
        sum += num;
    }
    return sum;
}
int main(int argc, char const *argv[])
{
    using namespace std;
    vector <double> distances;
    for (double distance; cin >> distance;)
    {
        distances.push_back(distance);
    }
    double sum = sum_vector(distances);
    cout << "Общая сумма: " << sum << endl
    << "Наименьшее расстояние: " << *min_element(distances.begin(),distances.end()) << endl
    << "Наибольшее расстояние: " << *max_element(distances.begin(),distances.end()) << endl
    << "Среднее расстояние: " << sum/distances.size() << endl;
    


    return 0;
}
