#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l = {10, 20, 30};

    // Modifiers at both ends
    l.push_front(5); // Inserts at the beginning
    l.push_back(40); // Inserts at the end

    l.pop_front(); // Removes from beginning
    l.pop_back();  // Removes from end

    // Accessors
    cout << "List Front: " << l.front() << ", Back: " << l.back() << endl;

    // Iterating and erasing
    auto it = l.begin();
    advance(it, 1); // Moves iterator manually to index 1 (value 20)
    l.erase(it);    // Erases 20

    l.clear();
    return 0;
}