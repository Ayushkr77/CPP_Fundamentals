/*
=====================================================
SORT() in C++ STL
=====================================================

Definition:
sort() rearranges elements in ascending order by default.

Works on arrays, vectors, strings, etc.

Header:
#include <algorithm>

Internally uses Introsort
(quicksort + heapsort + insertion sort)

=====================================================
TIME COMPLEXITY
=====================================================

O(n log n)

=====================================================
SPACE COMPLEXITY
=====================================================

O(log n) recursion stack

=====================================================
SYNTAX
=====================================================

sort(begin, end)

sort(begin, end, comparator)

=====================================================
BASIC ARRAY EXAMPLE
=====================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[] = {4, 2, 1};

    sort(arr, arr + 3);

    for (int x : arr) cout << x << " ";

    return 0;
}

/*
Output: 1 2 4
*/

/*
=====================================================
VECTOR EXAMPLE
=====================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v = {4, 2, 1};

    sort(v.begin(), v.end());

    for (int x : v) cout << x << " ";

    return 0;
}

/*
=====================================================
DESCENDING ORDER
=====================================================

Use built-in comparator greater<T>()
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v = {4, 2, 1};

    sort(v.begin(), v.end(), greater<int>());

    for (int x : v) cout << x << " ";

    return 0;
}

/*
Output: 4 2 1
*/

/*
=====================================================
CUSTOM COMPARATOR
=====================================================

Used when sorting custom data types.

Example: sort vector<pair> by second element
*/

#include <bits/stdc++.h>
using namespace std;

bool sortBySecond(const pair<int,int>& a,
                  const pair<int,int>& b) {
    return a.second < b.second;
}

int main() {

    vector<pair<int,int>> v = {{10,3}, {20,1}, {30,2}};

    sort(v.begin(), v.end(), sortBySecond);

    for (auto p : v)
        cout << p.first << " " << p.second << endl;

    return 0;
}

/*
Output:
20 1
30 2
10 3
*/

/*
=====================================================
WHEN TO USE sort()
=====================================================

✔ ordering data
✔ greedy algorithms
✔ binary search preparation
✔ ranking problems
✔ pair/struct sorting

=====================================================
IMPORTANT NOTES
=====================================================

sort() is NOT stable

For stable sorting use:

stable_sort(begin, end)

=====================================================
*/
