// Given an integer n, find XOR of all the numbers from 1 to n
// Brute Force
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     int x=0;
//     for(int i=1;i<=n;i++) x^=i;
//     cout<<x;
// }



// Observation: If we do XOR from 1 to:
// n=1. XOR=1
// n=2. XOR=3
// n=3. XOR=0
// n=4. XOR=4
// n=5. XOR=1
// n=6. XOR=7
// n=7. XOR=0
// n=8. XOR=8
// n=9. XOR=1

// We observe that when n=1,n=5,n=9 then, XOR=1. Similarly, if n=13,...
// We observe that when n=2,n=6,n=10 then, XOR=n+1. Similarly, if n=14,...
// We observe that when n=3,n=7,n=11 then, XOR=0. Similarly, if n=15,...
// We observe that when n=4,n=8,n=12 then, XOR=n. Similarly, if n=16,...

// Conclusion: if(n%4==1), then XOR=1. if(n%4==2), then XOR=n+1. if(n%4==3), then XOR=0. if(n%4==0), then XOR=n.
// Optimal
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     if(n%4==1) cout<<1;
//     if(n%4==2) cout<<n+1;
//     if(n%4==3) cout<<0;
//     if(n%4==0) cout<<n;
// }





// XOR of a range of numbers, left and right will be given. Find XOR from left to right
// Brute Force
// #include<iostream>
// using namespace std;
// int main() {
//     int l,r;
//     cin>>l>>r;
//     int x=0;
//     for(int i=l;i<=r;i++) x^=i;
//     cout<<x;
// }



// Optimal
// We'll find XOR from 1 to 'l-1' as discussed at top of this file(see optimal approach of XOR from 1 to n). Then find XOR from 1 to r. Now do XOR of both, we'll get the result
// Explanation: l=4,r=7. It means XOR from 4 to 7. Finding XOR from 1 to 3=1^2^3. Finding XOR from 1 to 7=1^2^3^4^5^6^7. Now do XOR of both (1^2^3)^(1^2^3^4^5^6^7). We'll be left with 4^5^6^7.
#include<iostream>
using namespace std;
int findXOR(int n) {
    if(n%4==1) return 1;
    if(n%4==2) return n+1;
    if(n%4==3) return 0;
    if(n%4==0) return n;
    return -1;
}
int main() {
    int l,r;
    cin>>l>>r;
    int x1=findXOR(l-1);
    int x2=findXOR(r);
    int x=x1^x2; 
    cout<<x;
}