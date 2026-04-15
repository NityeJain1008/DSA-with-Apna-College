#include <iostream>
using namespace std;
int maxsum(vector<int> nums)
{

    int currsum = 0, maxSum = INT_MIN;

    for (int val : nums)
    {

        currsum = currsum + val;

        if (currsum > maxSum)
        {
            maxSum = currsum;
        }
        if (currsum < 0)
        {
            currsum = 0;
        }
    }
    return maxSum;
}

int main()
{

    vector <int> nums = {1, -2, 3, 4, 5} ; 

    cout << maxsum(nums) << endl ; 

    return 0;
}
