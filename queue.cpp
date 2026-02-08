/*
=====================================================
QUEUE in C++ STL
=====================================================

Definition:
Queue is a FIFO (First In First Out) data structure.

Insertion happens at rear.
Deletion happens at front.

=====================================================
TIME COMPLEXITY
=====================================================

push      → O(1)
pop       → O(1)
front     → O(1)
back      → O(1)
size      → O(1)

=====================================================
SPACE COMPLEXITY
=====================================================

O(n)

=====================================================
IMPORTANT FUNCTIONS
=====================================================

push(x)     → insert at rear
pop()       → remove front element
front()     → first element
back()      → last element
size()      → number of elements
empty()     → check if empty
emplace(x)  → efficient insertion

=====================================================
CODE EXAMPLE
=====================================================
*/

#include <bits/stdc++.h>
using namespace std;

// helper function to print queue
void printQueue(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {

    queue<int> q;

    // push elements
    for (int i = 1; i <= 5; i++)
        q.push(i);

    cout << "Queue elements: ";
    printQueue(q);

    cout << "Size: " << q.size() << endl;
    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;

    // pop
    q.pop();

    cout << "After pop: ";
    printQueue(q);

    return 0;
}

/*
=====================================================
WHEN TO USE queue
=====================================================

✔ BFS traversal
✔ scheduling
✔ buffering tasks
✔ FIFO processing

Use stack for LIFO behavior
=====================================================
*/
