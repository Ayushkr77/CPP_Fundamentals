/*
=====================================================
MULTISET in C++ STL
=====================================================

Definition:
multiset is an ordered associative container that
stores elements in sorted order.

Duplicates ARE allowed.

Implemented using balanced binary search tree.

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

insert(x)     → insert element (duplicates allowed)
erase(x)      → erase all occurrences of x
erase(it)     → erase element at iterator
find(x)       → returns iterator if found
count(x)      → number of occurrences
size()        → total elements
empty()       → check if empty
clear()       → delete all elements
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

    multiset<int> s;

    // insert 1..10
    for (int i = 1; i <= 10; i++) {
        s.insert(i);
    }

    // duplicate insert
    s.insert(5);

    cout << "Elements: ";
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
        cout << "Multiset is not empty\n";
    else
        cout << "Multiset is empty\n";

    // clear
    s.clear();

    cout << "Size after clear: " << s.size() << endl;

    return 0;
}

/*
=====================================================
WHEN TO USE multiset
=====================================================

✔ need sorted duplicates
✔ frequency tracking
✔ order + duplicates
✔ sliding window problems

Avoid when O(1) speed required → use unordered_multiset
=====================================================
*/
