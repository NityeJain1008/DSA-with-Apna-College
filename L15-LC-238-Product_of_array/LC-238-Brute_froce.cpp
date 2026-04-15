#include <iostream>
using namespace std;

vector<int> product(vector<int> &nums)
{

    int n = nums.size();
    vector<int> answer;

    for (int i = 0; i < n; i++)
    {
        int product = 1 ; 
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                product = product * nums[j];
            }
        }
        answer.push_back(product);
    }

    return answer;
}

int main()
{
    vector<int> nums = {-1,1,0,-3,3};

    vector<int> result = product(nums);

    // Print the result
    for (int val : result) {
        cout << val << " ";
    }

    return 0;
}