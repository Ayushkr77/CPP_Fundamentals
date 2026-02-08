/*
=====================================================
min_element() in C++ STL
=====================================================

Definition:
min_element() returns an iterator pointing to the
smallest element in a range.

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

*min_element(begin, end)

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

    cout << "Minimum element: "
         << *min_element(v.begin(), v.end());

    return 0;
}

/*
Output:
Elements: 4 2 5 9 1
Minimum element: 1
*/

/*
=====================================================
IMPORTANT NOTE
=====================================================

Without * you get iterator:

auto it = min_element(v.begin(), v.end());

Value = *it

=====================================================
RELATED FUNCTION
=====================================================

max_element(begin, end)
→ finds maximum element

=====================================================
WHEN TO USE
=====================================================

✔ find smallest element
✔ greedy algorithms
✔ comparisons
✔ quick min lookup

=====================================================
*/
