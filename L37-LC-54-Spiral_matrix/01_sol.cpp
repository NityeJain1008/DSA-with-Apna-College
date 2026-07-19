#include <iostream>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{

    int m = matrix.size();
    int n = matrix[0].size();

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = m - 1;
    int endingCol = n - 1;

    vector<int> answer;

    while (startingRow <= endingRow && startingCol <= endingCol)
    {
        for (int j = startingCol; j <= endingCol; j++)
        {
            answer.push_back(matrix[startingRow][j]);
        }

        for (int i = startingRow + 1; i <= endingRow; i++)
        {
            answer.push_back(matrix[i][endingCol]);
        }

        for (int j = endingCol - 1; j >= startingCol; j--)
        {
            if (startingRow == endingRow)
            {
                break;
            }
            answer.push_back(matrix[endingRow][j]);
        }

        for (int i = endingRow - 1; i >= startingRow + 1; i--)
        {
            if (startingCol == endingCol)
            {
                break;
            }
            answer.push_back(matrix[i][startingCol]);
        }

        startingRow++;
        endingRow--;
        startingCol++;
        endingCol--;
    }

    return answer;
}

int main()
{

    return 0;
}