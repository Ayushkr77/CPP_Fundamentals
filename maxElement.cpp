/*
=====================================================
max_element() in C++ STL
=====================================================

Definition:
max_element() returns an iterator pointing to the
largest element in a range.

We dereference it using * to get the value.

Header:
#include <algorithm>

=====================================================
TIME COMPLEXITY
=====================================================

O(n)

=====================================================
SPACE COMPLEXITY
=====================================================

O(1)

=====================================================
SYNTAX
=====================================================

*max_element(begin, end)

Returns iterator → must dereference *

=====================================================
CODE EXAMPLE
=====================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v = {4, 2, 5, 9, 1};

    cout << "Elements: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    cout << "Maximum element: "
         << *max_element(v.begin(), v.end());

    return 0;
}

/*
Output:
Elements: 4 2 5 9 1
Maximum element: 9
*/

/*
=====================================================
IMPORTANT NOTE
=====================================================

auto it = max_element(v.begin(), v.end());

Value = *it

=====================================================
RELATED FUNCTION
=====================================================

min_element(begin, end)
→ finds minimum element

=====================================================
WHEN TO USE
=====================================================

✔ find largest element
✔ greedy algorithms
✔ comparisons
✔ quick max lookup

=====================================================
*/
