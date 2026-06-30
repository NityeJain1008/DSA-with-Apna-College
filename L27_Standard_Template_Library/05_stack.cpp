#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;

    s.push(10);
    s.push(20);
    s.emplace(30); // 30 is at the top position

    cout << "Top element: " << s.top() << endl; // 30

    s.pop(); // Removes the topmost element (30)
    cout << "New Top element: " << s.top() << endl; // 20

    cout << "Stack size: " << s.size() << endl;
    cout << "Is empty: " << (s.empty() ? "Yes" : "No") << endl;

    return 0;
}