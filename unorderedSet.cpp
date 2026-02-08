/*
=====================================================
UNORDERED_SET in C++ STL
=====================================================

Definition:
An unordered_set is a hash-table based container that stores
unique elements in no particular order.

Duplicates are NOT allowed.
Order is unpredictable.
Average operations are O(1).

=====================================================
TIME COMPLEXITY (Average Case)
=====================================================

insert      → O(1)
erase       → O(1)
find        → O(1)
count       → O(1)
iteration   → O(n)

Worst case (hash collision): O(n)

=====================================================
SPACE COMPLEXITY
=====================================================

O(n)
Extra memory used for hash buckets.

=====================================================
IMPORTANT FUNCTIONS
=====================================================

insert(x)     → insert element
erase(x)      → erase by value
erase(it)     → erase by iterator
find(x)       → returns iterator if found
count(x)      → returns 1 if exists else 0
size()        → number of elements
empty()       → true if empty
clear()       → delete all elements
begin()       → iterator to first element
end()         → iterator to after last element

Other functions:
cbegin()
cend()
bucket_size()
emplace()
max_size()
max_bucket_count()

=====================================================
CODE EXAMPLE
=====================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    // Declare unordered_set of integers
    unordered_set<int> s;

    // Insert elements 1 to 10
    for (int i = 1; i <= 10; i++) {
        s.insert(i);
    }

    // Display elements
    cout << "Elements present: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    int n = 2;

    // find element
    if (s.find(n) != s.end())
        cout << n << " is present in unordered set\n";

    // erase first element
    s.erase(s.begin());

    cout << "After deletion: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // size
    cout << "Size: " << s.size() << endl;

    // empty check
    if (!s.empty())
        cout << "Set is not empty\n";
    else
        cout << "Set is empty\n";

    // clear all
    s.clear();

    cout << "Size after clear: " << s.size() << endl;

    return 0;
}

/*
=====================================================
WHEN TO USE unordered_set
=====================================================

✔ Fast lookup
✔ Remove duplicates
✔ Membership checking
✔ Hash-based problems
✔ Competitive programming

Avoid when sorted order is required → use set
=====================================================
*/
