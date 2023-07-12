#include <vector>


std::vector <int> del_0_vector(std::vector <int> nums)
{
    std::vector <int> vctr_without_0;
    for (int num : nums) if (num != 0) vctr_without_0.push_back(num);
    return vctr_without_0;
}