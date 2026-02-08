/*
=====================================================
NEXT_PERMUTATION in C++ STL
=====================================================

Definition:
next_permutation rearranges elements into the
next lexicographically greater permutation.

If no next permutation exists,
it rearranges into the smallest (sorted ascending).

Works on arrays, vectors, strings, etc.

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

next_permutation(start, end)

Returns:
true  → next permutation exists
false → wrapped to first permutation

=====================================================
CODE EXAMPLE
=====================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v = {1, 2, 3};

    cout << "All permutations:\n";

    do {
        for (int x : v) cout << x << " ";
        cout << endl;
    }
    while (next_permutation(v.begin(), v.end()));

    return 0;
}

/*
Output:
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
*/

/*
=====================================================
HOW IT WORKS (INTUITION)
=====================================================

1. Find first decreasing element from right
2. Swap with next greater element
3. Reverse right side

Example:
1 2 3 → 1 3 2

=====================================================
WHEN TO USE
=====================================================

✔ generate permutations
✔ lexicographic ordering
✔ brute force permutation problems
✔ combinatorics

=====================================================
IMPORTANT NOTE
=====================================================

Input must be sorted first to generate
all permutations in order.

sort(v.begin(), v.end());

=====================================================
*/
