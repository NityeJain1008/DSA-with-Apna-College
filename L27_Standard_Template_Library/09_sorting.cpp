#include <iostream>
#include <vector>
#include <algorithm> // Required header for sorting & utility transformations

using namespace std;

int main() {
    vector<int> vec = {5, 2, 9, 1, 6};

    // Sorting a whole vector range in standard ascending sequence
    sort(vec.begin(), vec.end()); // [1, 2, 5, 6, 9]

    // Sorting in reverse/descending using the standard 'greater' utility adapter
    sort(vec.begin(), vec.end(), greater<int>()); // [9, 6, 5, 2, 1]

    return 0;
}