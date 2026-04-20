// Divide Two Integers without using Multiplication and Division Operators(Bit Manipulation)
// Brute Force
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int dividend,divisor;
//     cin>>dividend>>divisor;
//     int s=divisor;
//     int c=0;
//     while(s<=dividend) {
//         s+=divisor;
//         c++;
//     }
//     cout<<c;
// }



// Optimal
// Approach: Suppose Numerator(n)=22, Denominator(d)=3. What we'll do is, we'll multiply d with 2 power count and will keep increasing the count(initially, count=0) till n >= d*(2 power count). And will subtract 2 power count from n.And we'll take a variable ans=0 and will keep updating ans by ans+=2 power count. Continue this loop until n gets reduced to a number less than d.
// Ex.: n=22, d=3. 3*2power0=3. Yes, it is lesser than 22, increase count by 1. 3*2power1=6(lesser than 22). 3*2power2=12(lesser than 22). 3*2power3=24(more than 22). So subtract n by 3*2power2=12. n=22-12=10. And update ans variable by adding 2power(count) which is here 0+2power2=4. Now perform same operations on n=10. We'll see that the max we can subtract is 3*2power1=6.n=10-6=4. ans=4+2power1=6. ... Continue this till while(n>=d). Matlab n jaise hi d se chota hoga break loop
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,d;  //n->Numerator, d->Denominator
    cin>>n>>d;
    if(n==d) {
        cout<<1;
        return -1;
    }
    int sign=1;
    if(d>=0 && n<0) sign=-1;
    if(d<0 && n>=0) sign=-1;
    n=abs(n);
    d=abs(d);
    int ans=0;
    while(n>=d) {
        int c=0;
        while(n>=(d<<(c+1))) {  //it is checking whether n>=d*2power(c+1);
            c++;
        }
        ans+=1<<c; //it is adding 2power(c) to ans
        n=n-(d<<c);  // it is subtracting d*2power(c) from n
    }
    // below code is for Competitive Programming(Store all he variables in long like n,d,ans)
    // if(ans==(1<<31) && sign==1) return INT_MAX;  // if(ans>=2power(31) && sign=1) return INT_MAX;
    // if(ans==(1<<31) && sign==-1) return INT_MIN;
    ans=ans*sign;
    cout<<ans;
}