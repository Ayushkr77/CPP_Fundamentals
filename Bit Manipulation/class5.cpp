// Single Number-II
// All numbers will occur thrice, except one element. Return that number
// See video Striver(Single Number-II)  https://www.youtube.com/watch?v=5Bb2nqA40JY&list=PLgUwDviBIf0rnqh8QsJaHyIX7KUiaPUv7&index=6&ab_channel=takeUforward
// Brute Force discussed in video
// Approach: Sort the array. Start from index 1 and keep incrementing i by i+3. If nums[i]!=nums[i-1] return nums[i-1]. By chance, this condition is never met return nums[n-1] i.e., the last element
// Ex.: Assume sorting is done.
// i) nums=[1,1,1,2,2,2,3,4,4,4].  i=1, nums[i]==nums[i-1]=1 proceed. i=4, nums[i]==nums[i-1]=2 proceed. i=7 nums[i]!=nums[i-1] as nums[i]=4 and nums[i-1]=3. So return 3
// ii) nums=[1,2,2,2,4,4,4]. i=1, nums[i]!=nums[i-1] as nums[i]=2 and nums[i-1]=1. So, return 1
// iii) nums=[1,1,1,2,2,2,4,4,4,5].  i=1, nums[i]==nums[i-1]=1 proceed. i=4, nums[i]==nums[i-1]=2 proceed. i=7, nums[i]==nums[i-1]=4 proceed. i=10, out of range so, return nums[n-1]=last element=5
#include<bits/stdc++.h>
using namespace std;
// Whenever occurence comes, the brute force solution can be using map
int singNum2(vector<int> nums) {
    sort(nums.begin(),nums.end());
    for(int i=1;i<nums.size();i+=3) {
        if(nums[i]!=nums[i-1]) return nums[i-1];
    }
    return nums[nums.size()-1];
}
int main() {
    vector<int> nums;
    int a;
    while(cin>>a) {
        if(a==-1) break;
        nums.push_back(a);
    }
    int result=singNum2(nums);
    cout<<result;
}

// Bucket Method(See video Striver) Concept of Buckets