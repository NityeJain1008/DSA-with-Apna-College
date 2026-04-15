#include <iostream>
using namespace std;

int maxArea(vector<int> &height)
{

    int start = 0;
    int end = height.size() - 1;
    int volume = INT_MIN;
    int length = 0;
    int breadth = 0;

    while (start < end)
    {
        length = min(height[start], height[end]);
        breadth = end - start;
        volume = max(volume, length * breadth);

        if (height[start] < height[end])
        {
            start++;
        }
        else
            end--;
    }

    return volume;
}

int main()
{

    return 0;
}