int isSorted(int n,vector<int> a){
for(int i=1;i<n;i++){
    if(a[i]>=a[i-1]){
//sorted 
    }
    else{
        return false;
    }

}
return true;}

//Input: [1, 2, 3, 5, 7]

//Har step me a[i] >= a[i-1] true milta hai → return true.

//Input: [1, 4, 3, 5]

//Jab i=2 → a[2] = 3 aur a[1] = 4, condition fail → return false.



Loop

Loop runs from i = 1 to n-1.

That means it can execute n-1 times in the worst case.

So complexity = O(n)

Inside loop

Each step does only one comparison (a[i] < a[i-1]) → O(1).

Best case

If the array is not sorted, function may return false on the first iteration → O(1).

Worst case

If the array is sorted, the loop runs for all n-1 elements → O(n).

✅ Final Result

Best Case: O(1)

Worst Case: O(n)

Average Case: O(n)
