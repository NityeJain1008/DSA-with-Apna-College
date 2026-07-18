#include <iostream>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{

    int sr = 0, er = matrix.size() - 1;
    // int sc = 0 , ec = matrix[0].size() - 1 ;

    while (sr <= er)
    {
        int mr = sr + (er - sr) / 2;

        int sc = 0, ec = matrix[0].size() - 1;

        while (sc <= ec)
        {
            int mc = sc + (ec - sc) / 2;

            if (matrix[mr][mc] == target)
                return true;
            else if (matrix[mr][mc] > target)
                ec = mc - 1;
            else
                sc = mc + 1;
        }

        if (matrix[mr][0] > target)
            er = mr - 1;
        else if (matrix[mr][ec] < target)
            sr = mr + 1;
        else
            return false;
    }

    return false;
}

int main()
{

    return 0;
}