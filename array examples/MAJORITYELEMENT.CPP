#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v) {
    int cnt = 0;
    int el;   // candidate element

    // Step 1: Find candidate using Boyer-Moore algorithm
    for (int i = 0; i < v.size(); i++) {
        if (cnt == 0) {
            cnt = 1;
            el = v[i];
        }
        else if (v[i] == el) {
            cnt++;
        }
        else {
            cnt--;
        }
    }

    // Step 2: Verify candidate
    int cnt1 = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == el) cnt1++;
    }

    if (cnt1 > (v.size() / 2)) {
        return el;
    }
    return -1;
}

int main() {
    vector<int> v = {2, 2, 1, 1, 1, 2, 2};

    int ans = majorityElement(v);
    if (ans != -1)
        cout << "Majority Element: " << ans << endl;
    else
        cout << "No Majority Element" << endl;

    return 0;
}
