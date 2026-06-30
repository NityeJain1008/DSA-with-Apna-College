#include <iostream>
#include <map>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    map<string, int> m;

    // Insertion
    m["Laptop"] = 1200;
    m.insert({"Phone", 800});
    m.emplace("Tablet", 400);

    // Iterating maps sorted by key
    for (auto const &pair : m)
    {
        cout << pair.first << " -> $" << pair.second << endl;
    }

    // Checking existence cleanly
    if (m.find("Phone") != m.end())
    {
        cout << "Phone found. Price: $" << m["Phone"] << endl;
    }

    m.erase("Tablet");                                          // Removing by key
    cout << "Does Tablet exist: " << m.count("Tablet") << endl; // 0 (False)

    // MultiMap & Unordered Map

    // MultiMap Example (Sorted, permits multiple duplicate keys)
    multimap<int, string> mm;
    mm.insert({1, "Task A"});
    mm.insert({1, "Task B"}); // Allowed!

    // Unordered Map Example (Fastest O(1) performance, completely unsorted keys)
    unordered_map<int, string> um;
    um[101] = "John";
    um[102] = "Sarah";

    return 0;
}