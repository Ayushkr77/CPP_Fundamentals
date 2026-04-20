// Single Number III
// We'll be given an array where every element will be occuring twice except two elements. ex.: nums=[2,4,2,14,3,7,7,3]. Return [4,14]
// Concept of Buckets
// Approach: Ex.: nums=[2,4,2,14,3,7,7,3]. XOR all the elements. 2^2^7^7^3^3^14^4=14^4=10(1110^0100=1010).
// In 14^4=10 i.e., 1110^0100, there will be minimum of 1 bit which will be different in them(more than 1 bit can also be different, but minimum 1 bit will be different). Matlab 10 yaani ki 1010 mein jaha jaha 1 hai, wo sab bits different tha(Iss case mein 2 bits different hai)
// Now, in 10 i.e., 1010 we can take any of set bit(either 1st or 3rd index in this case), but easiest way to take the rightmost set bit. To get the rightmost set bit, we will(num & num-1)^num. Ex.: num=1010100, num-1=1010011. num & num-1=1010000. Now 1010000^num=0000100, we'll get the rightmost set bit as 1 and all rest as 0.
// Now applying this thing on our number i.e., 10->1010, we'll get the rightmost set bit as 1 and rest all 0 i.e., 0010=2.
// Now we'll take 2 buckets. 14-> 1110, 4->100.1st bucket will contain all the numbers whose 1st bit is 1(1st bit kehne ka matlab jo nikale hai abhi yaani ki 2->0010 matlab 1st index(0-based indxing) wala bit ko check karege ki 1 hai ya nhi). 2nd bucket will contain all the numbers whose 1st bit is 0(1st bit kehne ka matlab jo nikale hai abhi yaani ki 2->0010 matlab 1st index(0-based indxing) wala bit ko check karege ki 0 hai ya nhi). 
// Ye toh sure hai ki jo 2 elements ek baar occur ho rha hai wo dono alag alag buckets mein jayega kyuki jo bit ko humlog check kar rhe hai wo different hoga.
// Since nums=[2,4,2,14,3,7,7,3]. We'll start checking for each element. 
// 2-> 10 Since the bit we are checking for i.e., 1st index bit is 1. Add to bucket 1. 4->100 Since the bit we are checking for i.e., 1st index bit is 0. Add to bucket 2. 2: Add to bucket 1. 14-> 1110 Since the bit we are checking for i.e., 1st index bit is 1. Add to bucket 1. 7->111 Since the bit we are checking for i.e., 1st index bit is 1. Add to bucket 1.7: Add to bucket 1. 3-> 11 Since the bit we are checking for i.e., 1st index bit is 1. Add to bucket 1.
// Suppose there are 2 more elements both equal to 8. 8->1000 Since the bit we are checking for i.e., 1st index bit is 0. Add to bucket 2. 8: Add to bucket 2.
// At the end: bucket 1-> [2,2,14,3,3,7,7]. Bucket 2-> [4] or [4,8,8](if we are taking more 2 elements and both equal to 8)
// Now perform XOR of bucket 1 and bucket 2 separately. Bucket 1 XOR=2^2^14^#^3^7^7=14. Bucket 2 XOR= 4^8^8=4. Now we get both the required elements 14 and 4

// Now, we'll not take buckets(or any array or vector). We'll take normal variable and we'll keep doing XOR as elements are coming according to corresponding buckets.
#include<bits/stdc++.h>
using namespace std;
// Whenever occurence comes, the brute force solution can be using map
void singNum3(vector<int> nums) {
    int x=0;
    for(int i:nums) x=x^i;
    int rightSetBit=(x & x-1)^x; //by this, we'll get the number with rightmost set bit(1) and rest all as 0
    int b1=0,b2=0;  //2 buckets, we are not taking any array or vector, but a normal variable and keep doing XOR simultaneously
    for(int i:nums) {
        if(i & rightSetBit) { //by this we'll get to know whether the bit we are checking for is 1 or not. If it is 1, we'll get some number, otherwise 0. Ex.: rightSetBit=2=10. It means we're checking for 1st index. if i=2, then i&rightSetBit=any-non zero number(which will be equal to rightSetBit only(according to me, check once)), put it in b1. if i=3->11, then i&rightSetBit=any non-zero number(which will be equal to rightSetBit only(according to me, check once)), put it in b1. if i=8->1000, then i&rightSetBit=0, put it in b2. 
            b1=b1^i;
        }
        else {
            b2=b2^i;
        }
    }
    cout<<b1<<" "<<b2;
}
int main() {
    vector<int> nums;
    while(true) {
        int a;
        cin>>a;
        if(a==-1) break;
        nums.push_back(a);
    }
    singNum3(nums);
}