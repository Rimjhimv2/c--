# Search Insert Position

Unknown

**LeetCode:** [https://leetcode.com/problems/search-insert-position/](https://leetcode.com/problems/search-insert-position/)
**Date Solved:** 2026-03-07
**Language:** 1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        
5        int left = 0;
6        int right = nums.size() - 1;
7
8        while(left <= right) {
9
10            int mid = left + (right - left) / 2;
11
12            if(nums[mid] == target)
13                return mid;
14
15            else if(nums[mid] < target)
16                left = mid + 1;
17
18            else
19                right = mid - 1;
20        }
21
22        return left;
23    }
24};
25///////////yesssssss

## Problem Description

_Description not available._

---
*Synced by [LeetSync](https://github.com) Chrome Extension*
