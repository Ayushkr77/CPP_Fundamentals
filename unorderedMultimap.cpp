/*
=====================================================
UNORDERED_MULTIMAP in C++ STL
=====================================================

Definition:
unordered_multimap is a hash-table based associative
container that stores key → value pairs.

Duplicate keys ARE allowed.

Elements are NOT stored in sorted order.

=====================================================
TIME COMPLEXITY (Average)
=====================================================

insert      → O(1)
erase       → O(1)
find        → O(1)
access      → O(1)
iteration   → O(n)

Worst case (collisions): O(n)

=====================================================
SPACE COMPLEXITY
=====================================================

O(n)

=====================================================
IMPORTANT FUNCTIONS
=====================================================

insert({k,v}) → insert key-value pair (duplicates allowed)
erase(k)      → erase all pairs with key k
erase(it)     → erase by iterator
find(k)       → returns iterator if found
count(k)      → number of occurrences of key
size()        → total pairs
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

    unordered_multimap<int, int> mp;

    // insert elements
    for (int i = 1; i <= 5; i++) {
        mp.insert({i, i * 10});
    }

    // duplicate key
    mp.insert({4, 40});

    cout << "Key\tValue\n";

    // print multimap
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << "\t" << it->second << endl;
    }

    int n = 2;

    // find key
    if (mp.find(n) != mp.end())
        cout << n << " exists in unordered_multimap\n";

    // erase first element
    mp.erase(mp.begin());

    cout << "After deletion:\n";
    for (auto x : mp)
        cout << x.first << "\t" << x.second << endl;

    // size
    cout << "Size: " << mp.size() << endl;

    // empty check
    if (!mp.empty())
        cout << "Multimap is not empty\n";
    else
        cout << "Multimap is empty\n";

    // clear
    mp.clear();

    cout << "Size after clear: " << mp.size() << endl;

    return 0;
}

/*
=====================================================
WHEN TO USE unordered_multimap
=====================================================

✔ duplicate keys allowed
✔ fast lookup
✔ frequency mapping
✔ hash-based problems

Avoid when sorted keys required → use multimap
=====================================================
*/
