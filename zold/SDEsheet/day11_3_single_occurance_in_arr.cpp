#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int low = 0, high = nums.size() - 2;

        while (low <= high)
        {
            int mid = (high + low) >> 1;
            if (nums[mid] == nums[mid ^ 1])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return nums[low];
    }
};

// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) {
//         int xor1 = nums[0];
//         for(int i=1;i<nums.size();i++){
//             xor1 = xor1^nums[i];
//         }
//         return xor1;
//     }
// };