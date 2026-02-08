/*
=====================================================
__builtin_popcount() in C++ STL
Count Set Bits
=====================================================

Definition:
Counts the number of 1s in the binary representation
of a number.

Example:
7 → binary 111 → answer = 3

=====================================================
TIME COMPLEXITY
=====================================================

O(1)  (hardware optimized)

=====================================================
SPACE COMPLEXITY
=====================================================

O(1)

=====================================================
NAIVE METHOD (Manual Bit Counting)
=====================================================
*/

#include <bits/stdc++.h>
using namespace std;

int count_setbits(int N) {
    int cnt = 0;

    while (N > 0) {
        cnt += (N & 1);  // check last bit
        N = N >> 1;      // right shift
    }

    return cnt;
}

/*
=====================================================
BUILT-IN FUNCTION
=====================================================

Syntax:
__builtin_popcount(int n)

Returns number of set bits in an integer
*/

int main() {

    int n = 7;

    cout << __builtin_popcount(n) << endl; // 3

    return 0;
}

/*
=====================================================
FOR LONG LONG
=====================================================

Syntax:
__builtin_popcountll(long long n)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    long long n = 77777777777777LL;

    cout << __builtin_popcountll(n) << endl;

    return 0;
}

/*
=====================================================
RELATED BUILTINS (VERY USEFUL)
=====================================================

__builtin_clz(x)     → count leading zeros
__builtin_ctz(x)     → count trailing zeros
__builtin_parity(x)  → parity of bits (odd/even)

=====================================================
WHEN TO USE
=====================================================

✔ bit manipulation problems
✔ subset DP
✔ bitmasking
✔ counting active bits
✔ competitive programming

=====================================================
SUMMARY
=====================================================

__builtin_popcount()   → int
__builtin_popcountll() → long long

Fastest way to count set bits.
=====================================================
*/
