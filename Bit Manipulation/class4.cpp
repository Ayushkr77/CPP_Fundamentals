// Single Number-I
// We'll be given an array where every element will be occuring twice except one element. ex.: nums=[4,1,2,1,2]. Return 4
// Brute force: Take a map and store occurence of each element. Now traverse the map and whosever value is 1(all others value will be 2), return that key
// Using Bit Manipulation(XOR)
// Approach: If we XOR a number with the same number, that is equal to 0. And XOR of a number with 0 is that number only. 
// Ex.: [4,1,2,1,2] XOR all the elements. Then 4^1^2^1^2=4^(1^1)^(2^2)=4^0^0=4
#include<bits/stdc++.h>
using namespace std;
// Whenever occurence comes, the brute force solution can be using map
int main() {
    vector<int> nums;
    int a;
    while(cin>>a) {
        if(a==-1) break;
        nums.push_back(a);
    }
    int result=0;
    for(int i:nums) result=result^i;
    cout<<result;
}