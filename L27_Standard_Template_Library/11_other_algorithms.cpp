#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // Required for accumulate

using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};

    // 1. Reverse
    reverse(nums.begin(), nums.end()); // [5, 4, 3, 2, 1]

    // 2. Max and Min Elements (returns iterators)
    auto maxIt = max_element(nums.begin(), nums.end());
    auto minIt = min_element(nums.begin(), nums.end());
    cout << "Max: " << *maxIt << ", Min: " << *minIt << endl;

    // 3. Accumulate (Sums range values together using an initial base value)
    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    cout << "Sum total: " << totalSum << endl; // 15

    // 4. Count (Counts exact matches of a value)
    int occurrences = count(nums.begin(), nums.end(), 3);
    cout << "Occurrences of 3: " << occurrences << endl;

    // 5. Binary Search (Prerequisite: range MUST be pre-sorted)
    sort(nums.begin(), nums.end());
    bool found = binary_search(nums.begin(), nums.end(), 4);
    cout << "Does 4 exist? " << (found ? "Yes" : "No") << endl;

    return 0;
}