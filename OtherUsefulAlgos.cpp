/*
Header required:
#include <algorithm>
#include <numeric>
=====================================================
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v = {1, 2, 2, 3, 5};

    /*
    =====================================================
    lower_bound()
    =====================================================
    first position >= target
    O(log n)
    */

    auto lb = lower_bound(v.begin(), v.end(), 2);
    cout << "lower_bound of 2: " << lb - v.begin() << endl;

    /*
    =====================================================
    upper_bound()
    =====================================================
    first position > target
    O(log n)
    */

    auto ub = upper_bound(v.begin(), v.end(), 2);
    cout << "upper_bound of 2: " << ub - v.begin() << endl;

    /*
    =====================================================
    binary_search()
    =====================================================
    returns true/false
    O(log n)
    */

    cout << "binary_search 3: "
         << binary_search(v.begin(), v.end(), 3) << endl;

    /*
    =====================================================
    reverse()
    =====================================================
    reverse container
    O(n)
    */

    reverse(v.begin(), v.end());

    cout << "reverse: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    /*
    =====================================================
    accumulate()
    =====================================================
    sum of elements
    O(n)
    */

    int sum = accumulate(v.begin(), v.end(), 0);
    cout << "sum: " << sum << endl;

    /*
    =====================================================
    count()
    =====================================================
    count occurrences
    O(n)
    */

    cout << "count of 2: "
         << count(v.begin(), v.end(), 2) << endl;

    /*
    =====================================================
    find()
    =====================================================
    returns iterator
    O(n)
    */

    auto it = find(v.begin(), v.end(), 3);
    if (it != v.end())
        cout << "3 found\n";

    /*
    =====================================================
    gcd / lcm
    =====================================================
    O(log n)
    */

    cout << "gcd(12,18): " << __gcd(12,18) << endl;
    // cout << "lcm(12,18): " << lcm(12,18) << endl;    // lcm() is not available in older C++ standards. can also try return (a / __gcd(a,b)) * b;

    /*
    =====================================================
    rotate()
    =====================================================
    rotate left
    */

    rotate(v.begin(), v.begin()+1, v.end());

    cout << "rotate: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    /*
    =====================================================
    unique()
    =====================================================
    remove consecutive duplicates
    must erase tail
    */

    v = {1,1,2,2,3,3};

    v.erase(unique(v.begin(), v.end()), v.end());

    cout << "unique: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    /*
    =====================================================
    next_permutation()
    =====================================================
    generate next lexicographic permutation
    */

    vector<int> p = {1,2,3};

    next_permutation(p.begin(), p.end());

    cout << "next permutation: ";
    for (int x : p) cout << x << " ";
    cout << endl;

    /*
    =====================================================
    min_element / max_element
    =====================================================
    */

    cout << "min: " << *min_element(v.begin(), v.end()) << endl;
    cout << "max: " << *max_element(v.begin(), v.end()) << endl;

    return 0;
}

/*
=====================================================
SUMMARY
=====================================================

lower_bound     → first >= target
upper_bound     → first > target
binary_search   → existence check
reverse         → reverse container
accumulate      → sum
count           → frequency
find            → search
__gcd / lcm     → math helpers
rotate          → shift elements
unique          → remove duplicates
next_permutation→ permutations
min/max_element → min/max

=====================================================
*/
