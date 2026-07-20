#include <iostream>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];

        if (mp.count(complement))
            return {mp[complement], i};

        mp[nums[i]] = i;
    }

    return {};
}

int main()
{

    return 0;
}
