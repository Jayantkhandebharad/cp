#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     long long minimumRemoval(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         long long sum=0;
//         sum = accumulate(nums.begin(),nums.end(), sum);

//         long long min1 = LLONG_MAX;
//         long long sum1 = 0;
//         int n=nums.size();
//         long long temp;
//         for(int i=0;i<n;i++){
//             sum -=nums[i];
//             temp = (long long)nums[i]*(n-i-1);
//             min1 = min(sum-temp+sum1,min1);
//             //cout<<min1<<" ";
//             sum1 += nums[i];
//         }
//         return min1;
//     }
// };
class Solution
{
public:
    long long minimumRemoval(vector<int> &A)
    {
        long N = A.size(), ans = LLONG_MAX, sum = accumulate(begin(A), end(A), 0L);
        sort(begin(A), end(A));
        for (int i = 0; i < N; ++i)
            ans = min(ans, sum - (N - i) * A[i]);
        return ans;
    }
};
