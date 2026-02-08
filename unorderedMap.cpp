/*
=====================================================
UNORDERED_MAP in C++ STL
=====================================================

Definition:
unordered_map is a hash-table based associative container
that stores key → value pairs.

Keys must be unique.
Elements are NOT stored in sorted order.

Implemented using hashing.

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

insert({k,v})  → insert key-value pair
mp[k]          → access / insert value
erase(k)       → erase by key
erase(it)      → erase by iterator
find(k)        → returns iterator if found
count(k)       → 1 if exists else 0
size()         → number of pairs
empty()        → check if empty
clear()        → delete all elements
begin()        → iterator to first element
end()          → iterator after last element

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

    unordered_map<int, int> mp;

    // insert elements
    for (int i = 1; i <= 5; i++) {
        mp.insert({i, i * 10});
    }

    cout << "Key\tValue\n";

    // print map
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << "\t" << it->second << endl;
    }

    int n = 2;

    // find key
    if (mp.find(n) != mp.end())
        cout << n << " exists in map\n";

    // erase first element
    mp.erase(mp.begin());

    cout << "After deletion:\n";
    for (auto x : mp)
        cout << x.first << "\t" << x.second << endl;

    // size
    cout << "Size: " << mp.size() << endl;

    // empty check
    if (!mp.empty())
        cout << "Map is not empty\n";
    else
        cout << "Map is empty\n";

    // clear
    mp.clear();

    cout << "Size after clear: " << mp.size() << endl;

    return 0;
}

/*
=====================================================
WHEN TO USE unordered_map
=====================================================

✔ fast key lookup
✔ frequency counting
✔ hashing problems
✔ competitive programming

Avoid when sorted keys required → use map
=====================================================
*/
