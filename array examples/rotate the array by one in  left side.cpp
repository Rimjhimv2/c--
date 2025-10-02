//extra space: Just one variable temp
//✅ So, Space Complexity = O(1) (Constant)

//space complexty in the algorithmm ,we take arr[] soo it is O(n) big of N i am using it in order to solve the problem

//main code part ye hai

Input:  [1, 2, 3, 4, 5]
Output: [2, 3, 4, 5, 1]


int temp=arr[0];
for(int i=0;i<n;i++){
    arr[i-1]=arr[i];

}
arr[n-1]=temp;

imp imp imp 
rotate the ARRAY BY D PLACE 
EX=> [1,2,3,4,5,6,7] IF D=7
THE CAN I SAY MULTIPLE OF 7 ROTATION IT COMES BACK TO THA ORIGIAL ARRAY 
AND REMAINIG IS WHAT U DO THE ROTATION 
ANYTHING LESSER THAN 7 IS VERY EASY TO SOLVE


FIRST APPROCH THAT U WILL BE TELLING TO THE INTERVIEWR IS BRUTEFORCE APPROCH 
This approach uses O(d) extra space (for the temp array).
Time complexity is O(n).
This is a simple and clean method, better than rotating one-by-one (O(n*d) __TIME__

NOW CODE PART IS if d=3
arr=[1,2,3,4,5,6,7] 
TEMP={1,2,3};
for(int i=d;i<n;i++){
    arr[i-d]=arr[i];
}
for(i=n-d;i<n;i++){
    arr[i]=temp[i-(n-d)]
}
//We're left rotating an array of size n by k positions.
//We already saved first k elements in temp[]
//We already shifted the remaining elements in the array to the left.
//Now we want to place the saved elements (temp[]) at the end of the array.


//n = 7 (length of array)
//k = 3 (number of rotations)
//So, temp = [1, 2, 3]
//🔁 Loop Range:
//i = n - k to n - 1 → i.e., i = 4 to 6
//So loop will run for:
//i = 4
//i = 5
//i = 6


#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void leftRotate(int arr[], int n, int d) {
    d = d % n;

    int temp[d];
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    for (int i = n - d; i < n; i++) {
        arr[i] = temp[i - (n - d)];
    }
}

int main() {
    int n;
    cin >> n;
    // You can complete the rest for input/output based on your use case.
}

t.c is O(d) + O(n - d) + O(d) = O(n) so bif of n hypot
Space Complexity:

temp[d] → uses extra space of size d

So, Space Complexity = O(d)


//now we are talking about most optimal solution which is based on observation
//Reversal Algorithm Concept:

//Reverse first d elements t.c is O(d)
//Reverse the remaining n - d elements tc is O(n-d)
//Reverse the entire array tc is O(n)


in this case t.c is slightly increases O(2n) but here we are not using any extra soace so s.c is O(1)

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void leftRotate(int arr[], int n, int d) {
    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int d;
    cin >> d;

    leftRotate(arr, n, d);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


//now write optimal solutioon without using the stl 
#include <iostream>
using namespace std;

// Function to reverse part of the array from index 'start' to 'end'
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to left rotate the array by d elements
void leftRotate(int arr[], int n, int d) {
    // Normalize d if greater than n
    d = d % n;

    // Reverse first d elements
    reverse(arr, 0, d - 1);
    // Reverse remaining n-d elements
    reverse(arr, d, n - 1);
    // Reverse the entire array
    reverse(arr, 0, n - 1);
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int d;
    cin >> d;

    leftRotate(arr, n, d);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
