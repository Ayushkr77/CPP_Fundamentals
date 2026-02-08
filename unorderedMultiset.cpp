/*
=====================================================
UNORDERED_MULTISET in C++ STL
=====================================================

Definition:
unordered_multiset is a hash-table based container that
stores elements in no particular order.

Duplicates ARE allowed.

Unlike unordered_set, it can store multiple copies
of the same value.

=====================================================
TIME COMPLEXITY (Average)
=====================================================

insert      → O(1)
erase       → O(1)
find        → O(1)
count       → O(1)
iteration   → O(n)

Worst case (collisions): O(n)

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
count(x)      → number of occurrences of x
size()        → total elements (including duplicates)
empty()       → check if empty
clear()       → delete all elements
begin()       → iterator to first element
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

    unordered_multiset<int> s;

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
WHEN TO USE unordered_multiset
=====================================================

✔ need duplicates
✔ fast lookup
✔ frequency counting
✔ hash-based problems

Avoid when sorted order required → use multiset
=====================================================
*/
