//bruteforce approch using set 
/ist insert element into a set 

set<int>st;
for(int i=0;i<n1;i++){
    st.insert(arr1[i])
}
//tc is for this two line is O(n1logn) where n is the size of the set 
for(int i=0;i<n2;i++){
    st.insert(arr2[i])
}
//tc is for this above two line is O(n2logn)

//imp imp imp for insertion into the set take O(logn)

//ccopy element from set to result array 

for(auto it: st){
    unionArr.push_back(it);
}
//here total element is n1+n2 so tc is O(n1+n2)
//for copying the element take o(n)

//now thw full total tc is O(n1logn+n2logn+n1+n2)
s.c is O(n1+n2)+ O(n1+n2) //2nd one is only for return the array i am not using it 


now full code is

#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b) {
    int n1 = a.size();
    int n2 = b.size();

    set<int> st;  // Set to store unique elements in sorted order

    // Insert all elements from first array
    for (int i = 0; i < n1; i++) {
        st.insert(a[i]);
    }

    // Insert all elements from second array
    for (int i = 0; i < n2; i++) {
        st.insert(b[i]);
    }

    // Transfer elements from set to result vector
    vector<int> temp;
    for (auto it : st) {
        temp.push_back(it);
    }

    return temp;
}

int main() {
    vector<int> arr1 = {1, 1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 3, 4, 4, 5, 6};

    vector<int> result = sortedArray(arr1, arr2);

    cout << "Union: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}


//now moving onto the optimal solution first tell the brute forch approach to the interviewer 

//two pointer approch 
#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> a) {
    int j = -1;

    // Step 1 → पहला zero index निकालो
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            j = i;   // पहला zero मिला
            break;
        }
    }

    // अगर कोई zero नहीं है तो array वैसा ही return कर दो
    if (j == -1) return a;

    // Step 2 → बाकी elements check करो
    for (int i = j + 1; i < n; i++) {
        if (a[i] != 0) {
            swap(a[i], a[j]); // non-zero को आगे लाओ
            j++;              // j को increment करो
        }
    }

    return a;
}

int main() {
    vector<int> arr = {1, 0, 2, 3, 0, 4, 0, 1};
    int n = arr.size();

    vector<int> result = moveZeros(n, arr);

    cout << "Array after moving zeros: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
//👉 Total = O(n) + O(n) = O(n)
//👉 Space Complexity = O(1)

