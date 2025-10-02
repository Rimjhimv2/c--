int linearSearch(int n, int target, vector<int>& arr) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}


//this code will truy in codestudio
//n the worst case, the target element might be at the end of the array or not present at all.

//So, we might have to check every element once.

//👉 Time Complexity: O(n)

//now space complexity is 
//this algo does not use any extra space it only use some integer so its timec complexity is O(1)