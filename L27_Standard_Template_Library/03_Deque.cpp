#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> dq = {20, 30};

    // Constant-time insertions at both ends
    dq.push_front(10);
    dq.push_back(40); // Current state: [10, 20, 30, 40]

    // Fast Indexing (Unlike lists, this is completely valid)
    cout << "Element at index 2: " << dq[2] << " or " << dq.at(2) << endl;

    dq.pop_front();
    dq.pop_back();

    cout << "Front: " << dq.front() << ", Back: " << dq.back() << endl;
    return 0;
}