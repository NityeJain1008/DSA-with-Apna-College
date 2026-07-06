#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Custom rule: Sort pairs primarily based on the second value.
// If secondary attributes match, sort based on the primary value in descending sequence.
bool myComparator(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second)
    {
        return a.second < b.second; // Standard sorting by secondary property
    }
    return a.first > b.first; // Descending order override for primary property
}

int main()
{
    vector<pair<int, int>> pairs = {{1, 5}, {2, 5}, {3, 2}};

    sort(pairs.begin(), pairs.end(), myComparator);

    for (auto p : pairs)
    {
        cout << "{" << p.first << ", " << p.second << "} ";
    }
    // Output sequence: {3, 2} {2, 5} {1, 5}
    cout << endl;
    return 0;
}