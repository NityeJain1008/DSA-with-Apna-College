#include <iostream>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
{
    int n = grid.size();
    vector<int> ans;
    vector<int> value;

    for (int i = 1; i <= n * n; i++)
    {
        ans.push_back(i);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (find(ans.begin(), ans.end(), grid[i][j]) != ans.end())
            {
                ans.erase(remove(ans.begin(), ans.end(), grid[i][j]), ans.end());
            }
            else
            {
                value.push_back(grid[i][j]);
            }
        }
    }

    return {value[0], ans[0]};
    return ans;
}

int main()
{

    return 0;
}