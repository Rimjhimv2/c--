#include<iostream>
using namespace std;


int BinarySearch(int arr[],int n,int key){
int start=0;
int end=n-1;
int mid;

while(start<=end){
    mid=start+(end-start)/2;

    if(arr[mid]==key){
    
    return mid;}
    else if(arr[mid]>key)
    start=mid-1;
    else
    end=mid+1;

    
    
}
return -1;
}
int main(){
int arr[1000];
int n,key ;
cout << "enter the size of an array";
cin>> n;
for(int i=0;i<n;i++)
cin>>arr[i];

cout << "Enter element to search: ";
cin>>key;
int result=BinarySearch(arr,n,key);
if(result!=-1)
    cout<<"element found";

else
cout<<"element found";
return 0;
}





by recursive manner 
int bs(vector<int>&nums,int low,int high,int target){
int low=0;
int high=n-1;
if(low>high)
return -1;
int mid=low+(high-low)/2;
if(nums[mid]==target){
    return mid;
}
else if(nums[mid]>target){
    bs(nums,low,mid-1,target);
}
else{
    bs(nums,mid+1,high,target);
}
}
int search(vector<int>&nums,int target){
    return bs(nums,0,nums.size()-1,target)
}




class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1;
        for(int i=0;i<n;i++){
            int mid=low+(high-low)/2;
            if(nums[mid]==target) 
            return mid;
            else if(nums[mid]>target)
            high=mid-1;
            else{
                low=mid+1;
            }
        }
        return -1;
    }
};