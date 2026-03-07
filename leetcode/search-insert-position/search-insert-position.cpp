// Problem: Search Insert Position
// URL: https://leetcode.com/problems/search-insert-position/
// Difficulty: Unknown
// Language: 1class Solution {
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
// Date: 2026-03-07
// Synced by LeetSync Chrome Extension

right = mid - 1;
        }

        return left;
    }
};
///////////yesssssss