#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> pos, neg;
    for(int num:nums){  //yaha nums ka har element numarray mai jayega
       if(num>0)
       pos.push_back(num);
       else
       neg.push_back(num);
    }
    //now plce alternatively into the original nums array
vector<int>ans(nums.size());
    int p=0,n=0;
    for(int i=0;i<nums.size();i++){
        if(i%2==0)
        ans[i]=pos[p++];
        //p → positive numbers (pos vector) ke liye index

//n → negative numbers (neg vector) ke liye index
        else{
            ans[i]=neg[n++];
        }
    }
    return ans;
}

int main(){
    vector<int> arr={3,1,-2,-5,2,-4};
    vector<int> result=rearrangeArray(arr);

    for(int x: result) cout<< x <<" ";
    return 0;
}

//ye bruteforce code hai and eski time complexity is O(2n)hai and space complexity 
//eski space complexity O(N) hai 

//now move on to the optimal solution 

//can we reduce the time complexity 

int n=nums.size();
vector<int>ans(n,0);
int posIndex=0;
int negIndex=1;
for(int i=0;i<=n;i++){
    if(nums<0){
        ans[negIndex]=nums[i];
        negIndex+=2;
    }
    else{
        ans[posIndex]=nums[i];
    }
}
return ans;
