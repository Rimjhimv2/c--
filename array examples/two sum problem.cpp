for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if (i == j) continue;

        if(arr[i]+arr[j]==target){
             return {i, j} 

        }
    }
}

Brute force → O(n²) (double loop).

Space Complexity → O(1) (no extra storage).
//👉 So this brute force solution literally checks every possible pair until it finds the correct one.

//Better Approach → Using a hash map (O(n) time, O(n) space).

//Optimal Approach → Using two pointers (O(n log n) if array is sorted).


//bettert approach

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;   // store value -> index
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int num = nums[i];
            int moreNeeded = target - num;

            if (mpp.find(moreNeeded) != mpp.end()) {
                return {mpp[moreNeeded], i};   // found the pair
            }
            mpp[num] = i;   // store current number with index
        }
        return {-1, -1};
    }
};
