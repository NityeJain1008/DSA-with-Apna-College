#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Initialization methods
    vector<int> vec1;                // Empty vector
    vector<int> vec2 = {1, 2, 3, 4}; // Initializer list
    vector<int> vec3(5, 100);        // Creates size 5 with all elements as 100

    // Core functions
    vec1.push_back(10); // Inserts 10 at the end
    vec1.push_back(20);
    vec1.push_back(30); // Current: [10, 20, 30]

    vec1.pop_back(); // Removes the last element (30)

    // Access methods
    cout << "Front element: " << vec1.front() << endl; // 10
    cout << "Back element: " << vec1.back() << endl;   // 20
    cout << "Using operator[]: " << vec1[1] << endl;   // 20
    cout << "Using at(): " << vec1.at(1) << endl;      // 20 (Performs bounds-checking)

    // Modification methods
    vec1.insert(vec1.begin() + 1, 15); // Inserts 15 at index 1 -> [10, 15, 20]
    vec1.erase(vec1.begin() + 1);      // Erases element at index 1 -> [10, 20]

    // Size & Capacity tracking
    cout << "Size: " << vec1.size() << endl;         // 2 (Number of active elements)
    cout << "Capacity: " << vec1.capacity() << endl; // Total memory allocated under the hood
    cout << "Is empty: " << (vec1.empty() ? "Yes" : "No") << endl;

    vec1.clear(); // Clears all elements (size becomes 0)

    // ITERATORS

    vector<int> vec = {10, 20, 30, 40};

    // Forward iterators
    // vec.begin() points to the 1st element. vec.end() points to the memory position AFTER the last element.
    cout << "Forward iteration: ";
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
    {
        cout << *it << " "; // De-referencing gets the value
    }
    cout << endl;

    // Reverse Iterators
    // rbegin() points to the last element, rend() points to the slot before the first element
    cout << "Reverse iteration: ";
    for (auto it = vec.rbegin(); it != vec.rend(); ++it)
    { // Using 'auto' keyword simplifies syntax
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}