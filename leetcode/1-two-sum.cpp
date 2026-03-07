// Problem: 1. Two Sum
// URL: https://leetcode.com/problems/two-sum/
// Difficulty: Easy
// Language: C++
// Date: 2026-03-07
// Tags: Array, Hash Table
// Synced by LeetSync Chrome Extension

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // Hash map to store number -> index
        unordered_map<int, int> mp;

        // Loop through the array
        for (int i = 0; i < nums.size(); i++) {

            // Calculate the number needed to reach the target
            int complement = target - nums[i];

            // Check if this complement already exists in the map
            if (mp.find(complement) != mp.end()) {

                // If found, return the index of complement and current index
                return {mp[complement], i};
            }

            // If not found, store current number with its index
            mp[nums[i]] = i;
        }

        // Return empty vector (problem guarantees a solution, so usually not reached)
        return {};
    }
};