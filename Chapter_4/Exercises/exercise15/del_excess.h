#include <vector>


std::vector <int> del_0_vector(std::vector <int> nums, int n)
{
    std::vector <int> vctr_without_0;
    for (int num : nums) if (num != 0) vctr_without_0.push_back(num);
    return vctr_without_0;
}

template <typename T1>
std::vector <T1> conversion_to_desired_amount (std::vector <T1> vctr, int n)
{
    while (vctr.size() != n)
    {
        vctr.pop_back();
    }
    return vctr;
}