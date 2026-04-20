// Power Set (Print all subsets)
// Ex.: nums=[1,2,3]. All the subsets will be [],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]. Since there are 3 elements in nums, so subsets will be 2 power 3 =8.
// Note: In truth table, suppose of 3 elements A,B and C. There will be 8, starting from 0 to 7. And each number is in binary. 000,001,010,011,100,101,110,111. which are actually 0 to 7. We can take examples of 2 elements also A and B and check by drawing truth table
// Approach: What we are doing is we'll be traversing from 0 to (2 power n) -1 (here 0 to 7, n->size of nums). And then we'll check if there is 1 at the ith bit, we'll take it(add it), otherwise ignore. We've already learned how to check whether the ith bit is set or not. Example: nums=[1,2,3]. We'll be traversing from 0 to 7 0->000, all 0 so we'll take none. 1->001, whichever bit is 1, we'll add that index of nums to our answer. Since here 0th bit is 1, we'll add nums[0] to our answer which is 1. Proceed in the same way...
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> nums;
    int a;
    while(cin>>a) {
        if(a==-1) break;
        nums.push_back(a);
    }
    int n=nums.size();
    int n1=1<<n; // number of subsets=2 power n or 1<<n=1*2powern
    vector<vector<int>> ans;
    for(int num=0;num<n1;num++) {
        vector<int> temp;
        for(int i=0;i<n;i++) {
            if(num & 1<<i) temp.push_back(nums[i]);
        }
        ans.push_back(temp);
    }
    for(auto row:ans) {
        for(auto i:row) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}