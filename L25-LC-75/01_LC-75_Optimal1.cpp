#include <iostream>
using namespace std;

void sortColors(vector<int> &nums)
{
    vector<int> sortarr(nums.size());
    int start = 0;
    int end = nums.size() - 1;
    int mid = start + (end - start) / 2;

    for (int i = 0; i < nums.size(); i++)
    {

        if (nums[i] == 0)
        {
            sortarr[start] = nums[i];
            start++;
        }

        if (nums[i] == 2)
        {
            sortarr[end] = nums[i];
            end--;
        }
    }

    for (int i = start; i <= end; i++)
    {
        sortarr[i] = 1;
    }
    nums = sortarr;
}

int main()
{

    return 0;
}
