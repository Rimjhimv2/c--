// Problem: 35. Search Insert Position
// URL: https://leetcode.com/problems/search-insert-position/
// Difficulty: Easy
// Language: C++
// Date: 2026-03-07
// Tags: Array, Binary Search
// Synced by LeetSync Chrome Extension

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int left = 0;
        int right = nums.size() - 1;

        while(left <= right) {

            int mid = left + (right - left) / 2;

            if(nums[mid] == target)
                return mid;

            else if(nums[mid] < target)
                left = mid + 1;

            else
                right = mid - 1;
        }

        return left;
    }
};
///////////yesssssss