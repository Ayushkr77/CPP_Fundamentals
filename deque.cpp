/*
=====================================================
DEQUE in C++ STL
=====================================================

Definition:
Deque (Double Ended Queue) allows insertion and deletion
from both front and back.

Hybrid of vector + queue.

Fast operations on both ends.

=====================================================
TIME COMPLEXITY
=====================================================

push_back     → O(1)
push_front    → O(1)
pop_back      → O(1)
pop_front     → O(1)
front/back    → O(1)
access [i]    → O(1)
insert middle → O(n)
erase middle  → O(n)

=====================================================
SPACE COMPLEXITY
=====================================================

O(n)

=====================================================
IMPORTANT FUNCTIONS
=====================================================

push_back(x)     → insert at end
push_front(x)    → insert at front
pop_back()       → remove last element
pop_front()      → remove first element
front()          → first element
back()           → last element
size()           → number of elements
empty()          → check if empty
clear()          → delete all elements
erase(pos)       → erase at position

Other functions:
begin(), end()
cbegin(), cend()
rbegin(), rend()
emplace_front()
emplace_back()
max_size()

=====================================================
CODE EXAMPLE
=====================================================
*/

#include <bits/stdc++.h>
using namespace std;

// helper function
void printDeque(deque<int> dq) {
    for (int x : dq) cout << x << " ";
    cout << endl;
}

int main() {

    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(30);
    dq.push_front(40);
    dq.push_front(50);

    cout << "Deque elements: ";
    printDeque(dq);

    cout << "Size: " << dq.size() << endl;
    cout << "Front: " << dq.front() << endl;

    dq.pop_front();
    cout << "After pop_front: ";
    printDeque(dq);

    cout << "Back: " << dq.back() << endl;

    dq.pop_back();
    cout << "After pop_back: ";
    printDeque(dq);

    return 0;
}

/*
=====================================================
WHEN TO USE deque
=====================================================

✔ need fast front + back operations
✔ sliding window problems
✔ double-ended processing
✔ better than vector for front insert/delete

Avoid when strict contiguous memory required → use vector
=====================================================
*/
