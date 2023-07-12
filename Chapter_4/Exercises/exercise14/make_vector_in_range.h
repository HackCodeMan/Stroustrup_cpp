#include <vector>

std::vector <int> make_vector_in_range(int start_range, int end_range)
{
    std::vector <int> nums;
    for (int i = start_range; i <= end_range; i++) nums.push_back(i);
    return nums;
}