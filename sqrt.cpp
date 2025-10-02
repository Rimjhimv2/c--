//main code part
/int start=0;int end=target ;int mid;int ans;
while(start<=end){
    mid=start+(end-start)/2;
    if(mid*mid==target){
       ans=mid;
       break; 
    }
    else if(mid*mid<target){
        ans=mid;
        start=mid+1;
    }
    else{
end=mid-1;
    }
}