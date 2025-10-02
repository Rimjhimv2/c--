//it is also called dutch national flag problem

//arr = [0, 1, 2, 0, 1, 2, 1, 2, 0, 0, 0, 1]
//Time and Space Complexity
//Counting loop → O(N)
//Rewriting loops → O(N)

//Total = O(2N) ≈ O(N)

//Extra space = O(1) (only counters used)
int cout1=0;
int cout2=0;
int cout3=0;
for(int i=0;i<n;i++){
    if(arr[i]==0) cout1++;
    else if(arr[i]==1) cout2++;
    else cout3++;
}
//now rewrite the array 
for(int i=0;i<cout1;i++){
    arr[i]=0;
}
for(int i=cout1;i<cout1+cout2;i++){
    arr[i]=1;
}
for(int i=cout0+cout1;i<n;i++){
    arr[i]=2;
}
tc is o(2n) which is 2 iteration i dont want two iteration
sc is O(1)

//now optimal solution is also ccalled dutch national flag algorithm

//in this we take 3 pointer 
//we make a hypothetical array
//0 to low-1 =>0
//low to mid-1 =>1


//and mid to high take any random number from 0,1,2
//only we have to manage this unsorted part 





//high+1 to n-1 => 2 


#include <bits/stdc++.h>
using namespace std;

void sortArray(vector<int>& arr, int n) {
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else { // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    vector<int> arr = {0, 1, 2, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = arr.size();

    sortArray(arr, n);

    cout << "Sorted array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}


Time Complexity (TC):

We are using a while loop that runs as long as mid <= high.

Each element is checked at most once and swapped at most once.

So total operations = proportional to N.

👉 TC = O(N)

💾 Space Complexity (SC):

We only use a few extra variables: low, mid, high (constant space).

No extra arrays or data structures are used.

👉 SC = O(1)

//Final Answer:

//Time Complexity: O(N)

//Space Complexity: O(1)
