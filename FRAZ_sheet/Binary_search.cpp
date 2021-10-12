/*Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.*/
//problem link: https://leetcode.com/problems/binary-search/


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int high = nums.size()-1;
        int low = 0;
        int mid ;
        while(high>=low){
            mid = (high+low)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(target<nums[mid]){
                high = mid -1;
            }
            else{
                low = mid +1;
            }
        }
        
        return -1;
    }
};
