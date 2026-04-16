#include <iostream>
using namespace std;

int singleNonDuplicate(vector<int> &nums)
{
    int start = 0, end = nums.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (mid == 0)
        {
            return nums[0];
        }

        if (nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1])
        {
            return nums[mid];
        }

        if ((mid) % 2 == 0)
        {
            if (nums[mid] == nums[mid - 1])
            {
                end = mid - 1;
            }
            if (nums[mid] == nums[mid + 1])
            {
                start = mid + 1;
            }
        }
        if ((mid) % 2 != 0)
        {
            if (nums[mid] == nums[mid - 1])
            {
                start = mid + 1;
            }
            if (nums[mid] == nums[mid + 1])
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{

    return 0;
}