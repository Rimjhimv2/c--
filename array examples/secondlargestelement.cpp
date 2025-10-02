//If array was [1, 7, 7, 7, 7, 7],

//We’d scan almost the whole array until index 0.

//That’s the true worst case.and its time compplexity is O(n)
//[1, 2, 4, 5, 7, 7]
//Time complexity of sorting = O(N log N)(best case and average case time complexity is this )

//code here this is a bruteforce approch
largest = arr[n-1];   // last element after sorting

for (i = n-2; i >= 0; i--) {
    if (arr[i] != largest) {
        second = arr[i];   // found 2nd largest
        break;
    }
}
//t.c is nlogn+n

Brute Force Approach (O(N log N))

Step 1: Sort the array → O(N log N)
Step 2: Traverse from the end to find 2nd largest (skip duplicates of largest).
Total: O(N log N)
👉 Example: [1, 2, 4, 7, 7, 5] → sort → [1, 2, 4, 5, 7, 7] → 2nd largest = 5.

and better approch is :=>

Step 1: Find largest element in one pass → O(N)
Step 2: Find second largest by scanning again (ignore elements equal to largest) → O(N)
total: O(2N) ≈ O(N)
👉 Example: Largest = 7, then second pass gives 2nd largest = 5.
//code of better approch
//ist pass
largest=arr[0];
for(int i=0;i<n;i++){
    if(arr[i]>largest)
    largest=arr[i];
}
//2nd pass find second largest element
slargest=-1;
for(int i=0;i<n;i++){
    if(arr[i]>slargest&& arr[i]!=largest)
    slargest=arr[i]
}

//now optimal solution approch is 



//here codestudiosolution is 



int secondLargest(vector<int> &a, int n) {
    int largest = a[0];   // Pehle element ko largest maan lo
    int slargest = -1;    // Second largest ko initially -1 (ya INT_MIN) rakh lo

    for(int i = 1; i < n; i++) {   // Loop 1 se start (0 already taken)
        
        if(a[i] > largest) {      
            // Agar current element sabse bada hai
            slargest = largest;   // Pehle wala largest ab 2nd largest ban jayega
            largest = a[i];       // Naya largest update ho jayega
        }

        else if(a[i] < largest && a[i] > slargest) {
            // Agar current element largest se chhota hai
            // lekin slargest se bada hai
            slargest = a[i];      // Update second largest
        }
    }

    return slargest;
}



//find the second largest element withot sorting



int secondSmallest(vector<int> &a, int n) {
    int smallest = a[0];         // Pehle element ko smallest maan lo
    int ssmallest = INT_MAX;     // Second smallest ko initially INT_MAX rakh lo

    for(int i = 1; i < n; i++) { 
        
        if(a[i] < smallest) {
            // Agar current element aur chhota milta hai
            ssmallest = smallest;   // Pehle wala smallest ab 2nd smallest ban jayega
            smallest = a[i];        // Naya smallest update ho jayega
        }
        else if(a[i] != smallest && a[i] < ssmallest) {
            // Agar current element smallest ke barabar nahi hai
            // aur second smallest se chhota hai
            ssmallest = a[i];       // Update second smallest
        }
    }

    return ssmallest;
}


//ime Complexity → O(N)

//Space Complexity → O(1) (kyunki hum bas smallest aur ssmallest store kar rahe hain, extra array ya data structure nahi use kiya)


//check if array is sorted or not 
