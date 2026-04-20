// Swap 2 numbers(using XOR)
// #include<bits/stdc++.h>
// using namespace std;
// void swap(int &a, int &b) {  //pass by reference(to change the original values)
//     a=a^b;
//     b=a^b;  // b=a^b=(a^b)^b=a^0=a
//     a=a^b;  // a=a^b=(a^b)^a=0^b=b
// }
// int main() {
//     int a=5,b=2;
//     swap(a,b);
//     cout<<a<<" "<<b<<endl;
// }




// Check if the ith bit is set(1) or not
// Brute force(Covert to binary, Start traversing from the back(right) and reach till ith position and check whether it is 1 or not). 0-based indexing
// Using Bit Manipulation. Without coverting into binary. 2 Approaches: Left shift and right shift
// Input: n = 4, i = 0. Output: No Explanation: Binary representation of 4 is 100, in which 0th index bit from LSB is not set. So, return false.
// #include<bits/stdc++.h>
// using namespace std;
// bool leftShift(int n, int i) {
//     // 1 ko i times left shift kar dege aur 1 phir ith position par hauch jayega aur baaki sab 0 rahega, phir iska AND kar dege n ke saath. Agar 0 aaya toh matlab ith position par set(1) nhi hai. Aur agar koi bhi number aaya toh matlab ith position par set hai
//     if(1<<i & n) return true;
//     return false;
// }
// bool rightShift(int n, int i) {
//     // n ko i times right shift karege toh ith position wala bit rightmost mein aa jayega. Phir iska AND kar dege 1 ke saath. Agar 0 aaya toh ith position par set nhi hai aur agar 1 aaya toh ith position par set hai
//     if((n>>i & 1)==1) return true;
//     return false; 
// }
// int main() {
//     int n,i;
//     cin>>n;
//     cin>>i;
//     // cout<<leftShift(n,i);
//     cout<<rightShift(n,i);
// }





// Set the ith bit
// If the ith bit is 1, let it be 1. if ith bit is 0, set it to 1
// Brute Force: Convert to binary, traverse from right and change the ith bit to 1 and again convert into decimal.
// #include<bits/stdc++.h>
// using namespace std;
// void setBit(int &n, int &i) {
//     // 1 ko i times left shift karege toh 1 ith position par pahuch jayega aur baaki sab 0 rahega. Aur phir iska OR kar dege n ke saath toh ith position par agar 1 hoga toh 1 aa jayega aur agar 0 hoga toh 1 ho jaayega
//     n=1<<i | n;
// }
// int main() {
//     int n,i;
//     cin>>n;
//     cin>>i;
//     setBit(n,i);
//     cout<<n;
// }




// Clear the ith bit
// ith bit ko 0 karna hai. agar ith bit 0 hai toh 0 aur agar ith bit bit 1 hai toh 0 kar dena hai
// #include<bits/stdc++.h>
// using namespace std;
// int clearBit(int n, int i) {
//     // 1 ko i times left shift karege toh 1 ith position par pahuch jayega aur baaki sab 0 rahega. Ab iska NOT kar dege toh ith position par 0 rahega aur baaki sab 1. ab iska AND kar dege n ke saath
//     int ans=n & ~(1<<i);
//     return ans;
// }
// int main() {
//     int n,i;
//     cin>>n;
//     cin>>i;
//     cout<<clearBit(n,i);
// }




// Toggle the ith bit
// 0 ko 1 aur 1 ko 0
// #include<bits/stdc++.h>
// using namespace std;
// int toggleBit(int n, int i) {
//     // 1 ko i times left shift karege toh 1 ith position par pahuch jayega aur baaki sab 0 rahega.Ab iska XOR kar dege n ke saath
//     int ans=1<<i ^ n;
//     return ans;
// }
// int main() {
//     int n,i;
//     cin>>n;
//     cin>>i;
//     cout<<toggleBit(n,i);
// }






// Observation:
// Ex.: n=16-> 10000. n-1=15-> 01111
// Ex.: n=40-> 101000. n-1=39-> 100111
// Ex.: n=84-> 1010100. n-1=83-> 1010011
// We are observing that whenever we are subtracting 1 from a number, then rightmost set bit(1) converts to 0 and the rest which are in right are converted into 1






// Remove the last set bit
// Rightmost se jo bhi pehla 1 milega usko 0 karna hai. Ex.: 1100->1000, 1101->1100, 10000->00000
// Observation:
// Ex.: n=16-> 10000. n-1=15-> 01111
// Ex.: n=40-> 101000. n-1=39-> 100111
// Ex.: n=84-> 1010100. n-1=83-> 1010011
// We are observing that whenever we are subtracting 1 from a number, then rightmost set bit(1) converts to 0 and the rest which are in right are converted into 1
// #include<bits/stdc++.h>
// using namespace std;
// int removeLastSetBit(int n) {
//     int ans=n & n-1;
//     return ans;
// }
// int main() {
//     int n;
//     cin>>n;
//     cout<<removeLastSetBit(n);
// }





// Check if a number is a power of 2 or not
// If a number is a power of 2, then it has only one setbit(1) which will be in leftmost. And if we do minus 1 of that power of 2, that set bit becomes 0 and all the right of that set bit becomes 1. Ex.: n=16-> 10000. n-1=15-> 01111
// #include<bits/stdc++.h>
// using namespace std;
// bool checkPower(int n) {
//     if((n & n-1)==0) return true;
//     return false;
// }
// int main() {
//     int n;
//     cin>>n;
//     cout<<checkPower(n);
// }






// Ckeck odd or even
// The last bit of an odd number is always 1 and that of an even number is always 0.
// n & 1 will return 1 if n is odd, and will return 0 if n is even
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     // cout<< (n&1)==1 ? "odd": "even";  //this will give error bcz precedence of == is higher than bitwise AND & operator
//     // cout<< ((n&1)==1 ? "odd": "even");   //this will work correct(dont know why)
//     // cout<< (n&1) ? "odd": "even";  // The << operator has higher precedence than ternary ? : operator. This will just print 0 or 1
//     if(n&1) cout<<"odd";
//     else cout<<"even";
// }







// Count the number of set bits
// This will be Brute force only. Like how We convert into binary, if the remainder is 1, we'll increase our count by 1, else keep the count same
// #include<bits/stdc++.h>
// using namespace std;
// int countSetBits1(int n) {
//     int c=0;
//     // while(n>0) {
//     //     if(n%2==1) c++;
//     //     n=n/2;
//     // }
//     // Alternate(Using Bit Manipulation)
//     while(n>0) {
//         c+= n&1;  //n & 1 will return 1 if n is odd, and will return 0 if n is even
//         n=n>>1;   // since formula for right shift is x>>k=x/2^k. x divided by 2 power k
//     }
//     return c;
// }
// int main() {
//     int n;
//     cin>>n;

//     // cout<<countSetBits1(n);

//     // Using inbuilt
//     cout<<__builtin_popcount(n);
// }






// Minimum bit flips to convert number
// Ex.: start=10->1010, goal=7-> 0111. bit flips required=3
// Ex.: start=3->11, goal=4-> 100. bit flips required=3
// Approach: We'll perform XOR of start and goal. Now, there will be 1 at the indices which need to be flipped. Now, simply count number of set bits, that'll be answer. Explanation: 10->1010, 7->0111. 10^7=1101. Wherever, there are 1, those indices need to be flipped. Now count the number of set bits
#include<bits/stdc++.h>
using namespace std;
int main() {
    int start,goal;
    cin>>start>>goal;
    int n=start^goal;
    cout<<__builtin_popcount(n);
}