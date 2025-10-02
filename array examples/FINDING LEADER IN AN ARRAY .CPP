//WHAT DO YO MEAN BY KEADER IN AN ARRAY?
ANS:EVERYTHING ON THE RIGHT  SHOULD SHOULD BE SMALLER

//IN THAT MOSTLY LAST ELEMENT WOULD BE THE LEADER 

1)BRUTEFORCE SOLUTION 

for(int i=0;i<n;i++){
    bool leader=true;
for(int j=i+1;j<n;j++){
    if(arr[j]>arr[i]){
        leader=false;
        break;
    }
}
if(leader){
    cout<<arr[i]<<" ";
}


}
//eski time complexity O(n^2),yaha 2 loop use hue hai 
// i have not used any extra space 
//Outer loop aur inner loop sirf variables use karte hain (i, j, leader) → ye sab O(1) space hai.


//but in the worst example [5 4 3 2 1 ]
//the space complexity would be the O(n) to store the ans as every number 
//would be the leader 

//optimmal solution 
//what i need to do if i can see that array element is greater than the maximum on 
//the right 

vector<int> superiorElements(vector<int>& a) {
    vector<int> ans;
    int maxi = INT_MIN;   // should be INT_MIN, not INT_MAX
    int n = a.size();

    for (int i = n - 1; i >= 0; i--) {
        if (a[i] > maxi) {
            ans.push_back(a[i]);
        }
        maxi = max(maxi, a[i]);
    }

    sort(ans.begin(), ans.end());
    return ans;
}


For loop: runs from n-1 down to 0 → O(n)

Inside loop:

Constant time operations (if, push_back, max) → O(1)

So loop = O(n)

Sorting step:

Suppose k superior elements are found (worst case = n)

Sorting takes O(k log k) → worst case = O(n log n)

👉 Overall TC = O(n) + O(n log n) = O(n log n)
(because sorting dominates)




ace Complexity (SC)

ans stores superior elements → up to O(n) in worst case

Few integers (maxi, n, i) → O(1)

Sorting may take O(log n) stack space (depending on implementation of std::sort)

👉 Overall SC = O(n)