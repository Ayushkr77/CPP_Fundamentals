/*
=====================================================
SET in C++ STL
=====================================================

Definition:
set is an ordered container that stores UNIQUE elements.
Elements are stored in sorted order automatically.

Implemented using balanced binary search tree.

No duplicates allowed.

=====================================================
TIME COMPLEXITY
=====================================================

insert      → O(log n)
erase       → O(log n)
find        → O(log n)
count       → O(log n)
iteration   → O(n)

=====================================================
SPACE COMPLEXITY
=====================================================

O(n)

=====================================================
IMPORTANT FUNCTIONS
=====================================================

insert(x)     → insert element
erase(x)      → erase by value
erase(it)     → erase by iterator
find(x)       → returns iterator if found
count(x)      → 1 if exists else 0
size()        → number of elements
empty()       → check if empty
clear()       → remove all elements
begin()       → iterator to smallest element
end()         → iterator after last element

Other functions:
cbegin(), cend()
rbegin(), rend()
emplace()
max_size()

=====================================================
CODE EXAMPLE
=====================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    set<int> s;

    // insert elements
    for (int i = 1; i <= 10; i++) {
        s.insert(i);
    }

    cout << "Elements in set: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    int n = 2;

    // find
    if (s.find(n) != s.end())
        cout << n << " is present\n";

    // erase first element
    s.erase(s.begin());

    cout << "After deletion: ";
    for (auto x : s) cout << x << " ";
    cout << endl;

    // size
    cout << "Size: " << s.size() << endl;

    // empty check
    if (!s.empty())
        cout << "Set is not empty\n";
    else
        cout << "Set is empty\n";

    // clear
    s.clear();

    cout << "Size after clear: " << s.size() << endl;

    return 0;
}

/*
=====================================================
WHEN TO USE set
=====================================================

✔ need sorted unique elements
✔ fast search + ordering
✔ remove duplicates while keeping sorted order

Avoid when O(1) speed required → use unordered_set
=====================================================
*/
