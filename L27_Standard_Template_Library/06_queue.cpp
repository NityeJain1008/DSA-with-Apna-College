#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front (First element): " << q.front() << endl; // 10
    cout << "Back (Last element): " << q.back() << endl;    // 30

    q.pop();                                    // Removes the oldest element from the front (10)
    cout << "New Front: " << q.front() << endl; // 20

    // Priority Queue

    // 1. Max-Heap (Default: largest element stays on top)
    priority_queue<int> maxPQ;
    maxPQ.push(5);
    maxPQ.push(25);
    maxPQ.push(10);

    cout << "Max-PQ Top: " << maxPQ.top() << endl; // 25
    maxPQ.pop();                                   // Removes 25

    // 2. Min-Heap (Smallest element stays on top)
    priority_queue<int, vector<int>, greater<int>> minPQ;
    minPQ.push(5);
    minPQ.push(25);
    minPQ.push(10);

    cout << "Min-PQ Top: " << minPQ.top() << endl; // 5

    return 0;
}