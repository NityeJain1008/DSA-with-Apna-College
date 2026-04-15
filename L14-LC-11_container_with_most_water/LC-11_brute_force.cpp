#include <iostream>
using namespace std;

int maxArea(vector<int> &height)
{

    int n = height.size();
    int length = 0;
    int breadth = 0;
    int volume = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            length = min(height[i], height[j]);
            breadth = j - i;
            volume = max(volume, length * breadth);
        }
    }

    return volume;

}

int main()
{

    return 0;
}