#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;

int main()
{
    set<int> st;

    st.insert(30);
    st.insert(10);
    st.insert(20);
    st.insert(20); // Repeated addition attempt is silently ignored

    for (int val : st)
        cout << val << " "; // 10 20 30
    cout << endl;

    // Finding elements
    auto it = st.find(20);
    if (it != st.end())
    {
        cout << "Found value " << *it << endl;
    }

    st.erase(20); // Removals

    // lowerBound & upperBound

    set<int> st1 = {10, 20, 30, 40, 50};

    // lower_bound on 30 -> points to 30
    auto lb = st1.lower_bound(30);
    cout << "Lower bound of 30: " << *lb << endl;

    // upper_bound on 30 -> points to the next bigger number, 40
    auto ub = st1.upper_bound(30);
    cout << "Upper bound of 30: " << *ub << endl;

    // MultiSet & Unordered Set

    // MultiSet
    multiset<int> ms = {10, 20, 20, 30}; // Keeps duplicates

    // CRITICAL WARNING: ms.erase(val) drops ALL instances of that value.
    // To drop just ONE single duplicate instance, erase by specific iterator instead:
    ms.erase(ms.find(20)); // Removes only one '20'

    // Unordered Set
    unordered_set<int> us = {50, 10, 40}; // Unsorted, unique items

    return 0;
}