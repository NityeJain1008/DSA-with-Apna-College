#include <iostream>
using namespace std;

bool binarySearchRow(vector<vector<int>> &matrix, int target, int row, int n)
{
    int sc = 0, ec = n - 1;
    while (sc <= ec)
    {
        int mc = sc + (ec - sc) / 2;
        if (matrix[row][mc] == target)
        {
            return true;
        }
        else if (matrix[row][mc] < target)
        {
            sc = mc + 1;
        }
        else
        {
            ec = mc - 1;
        }
    }
    return false;
}

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    if (matrix.empty() || matrix[0].empty())
        return false;

    int m = matrix.size();
    int n = matrix[0].size();
    int sr = 0, er = m - 1;

    while (sr <= er)
    {
        int mr = sr + (er - sr) / 2;

        if (target >= matrix[mr][0] && target <= matrix[mr][n - 1])
        {
            return binarySearchRow(matrix, target, mr, n);
        }
        else if (target > matrix[mr][n - 1])
        {
            sr = mr + 1;
        }
        else
        {
            er = mr - 1;
        }
    }

    return false;
}

int main()
{

    return 0;
}