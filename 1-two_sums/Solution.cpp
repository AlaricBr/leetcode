#include "Solution.h"
#include <unordered_map>

Solution::Solution()
{
}

vector<int> Solution::twoSum(vector<int>& nums, int target)
{
    unordered_map<int, int> mp;
    for(int i = 0; i < nums.size(); ++i)
    {
        int val = target - nums[i];
        if(mp[val])
        {
            return {i, mp[val]-1};
        }
        mp[nums[i]] = i+1;
    }

    return {};
}