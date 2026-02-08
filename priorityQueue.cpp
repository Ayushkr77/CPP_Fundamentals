/*
=====================================================
PRIORITY_QUEUE in C++ STL
=====================================================

Definition:
priority_queue is a special queue where elements
are processed based on priority.

By default:
largest element comes first (max heap).

Can also be used as min heap.

=====================================================
TIME COMPLEXITY
=====================================================

push      → O(log n)
pop       → O(log n)
top       → O(1)
size      → O(1)

=====================================================
SPACE COMPLEXITY
=====================================================

O(n)

=====================================================
IMPORTANT FUNCTIONS
=====================================================

push(x)      → insert element
pop()        → remove highest priority element
top()        → access highest priority element
size()       → number of elements
empty()      → check if empty
emplace(x)   → efficient insertion

=====================================================
MAX HEAP (DEFAULT)
=====================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    // max heap
    priority_queue<int> pq;

    pq.push(10);
    pq.push(30);
    pq.push(20);

    cout << "Top element: " << pq.top() << endl; // 30

    pq.pop();

    cout << "After pop top: " << pq.top() << endl;

    return 0;
}

/*
=====================================================
MIN HEAP VERSION
=====================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    // min heap
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(10);
    pq.push(30);
    pq.push(20);

    cout << "Top element: " << pq.top() << endl; // 10

    pq.pop();

    cout << "After pop top: " << pq.top() << endl;

    return 0;
}

/*
=====================================================
WHEN TO USE priority_queue
=====================================================

✔ heap problems
✔ kth largest/smallest element
✔ Dijkstra algorithm
✔ greedy algorithms
✔ scheduling problems
✔ top K elements

Acts like a heap structure.
=====================================================
*/
