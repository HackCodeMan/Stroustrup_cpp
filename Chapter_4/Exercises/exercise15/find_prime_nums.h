#include <vector>

std::vector <int> find_prime_nums(std::vector <int> nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0) continue;
        else if (nums[i] == 1) continue;
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[j] == 0) continue;
            if (nums[j] % nums[i] == 0) nums[j] = 0;
        } 
    }
    
    return nums;
}
