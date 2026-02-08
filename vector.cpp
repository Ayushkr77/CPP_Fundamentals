/*
=====================================================
VECTOR in C++ STL
=====================================================

Definition:
Vector is a dynamic array that can grow or shrink in size.
Elements are stored in contiguous memory.

Fast random access using index.
Resizable.
Supports dynamic memory management automatically.

=====================================================
TIME COMPLEXITY
=====================================================

push_back      → O(1) amortized
pop_back       → O(1)
insert middle  → O(n)
erase middle   → O(n)
access [i]     → O(1)
front/back     → O(1)
iteration      → O(n)

=====================================================
SPACE COMPLEXITY
=====================================================

O(n)
Vector may allocate extra capacity for growth.

=====================================================
IMPORTANT FUNCTIONS
=====================================================

push_back(x)  → insert at end
pop_back()    → remove last element
insert(pos,x) → insert at position
erase(pos)    → delete element at position
front()       → first element
back()        → last element
size()        → number of elements
empty()       → check if empty
clear()       → remove all elements
begin()       → iterator to first
end()         → iterator to after last

Other functions:
cbegin(), cend()
rbegin(), rend()
crbegin(), crend()
capacity()
max_size()

=====================================================
CODE EXAMPLE
=====================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v;

    // insert elements
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }

    cout << "Elements: ";
    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";

    cout << "\nFront: " << v.front();
    cout << "\nBack: " << v.back();
    cout << "\nSize: " << v.size();

    // pop last element
    cout << "\nDeleting last element: " << v.back();
    v.pop_back();

    cout << "\nAfter pop_back: ";
    for (int x : v) cout << x << " ";

    // insert at beginning
    v.insert(v.begin(), 5);
    cout << "\nAfter insert 5 at start: " << v[0];

    // erase first element
    v.erase(v.begin());
    cout << "\nAfter erase first: " << v[0];

    // empty check
    if (v.empty())
        cout << "\nVector is empty";
    else
        cout << "\nVector is not empty";

    // clear all
    v.clear();
    cout << "\nSize after clear: " << v.size();

    return 0;
}

/*
=====================================================
WHEN TO USE vector
=====================================================

✔ dynamic array
✔ fast indexing
✔ storing sequence
✔ competitive programming default container

Avoid when frequent middle insert/delete → use list
=====================================================
*/
