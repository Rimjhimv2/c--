
//int start=0;int end=arr.size()-1;int last=-1;int first=-1;int mid;
while(start<=end){
    mid=start+(end-start)/2;
    if(arr[mid]==target){
        first=mid;
        end=mid-1;
    }
    else if(arr[mid]>target){
        end=mid-1;
    }
    else 
    start=mid+1;

}
//find last 
start=0;end=arr.size()-1;
while(start<=end){
    if(arr[mid]==target){
        last=mid;
        start=mid+1;
    }
    else if(arr[mid]>target){
        end=mid-1;
    }
    else 
    start=mid+1;

}


//find the code part of first occuranve of binary search
//search insert positiomn in bonary search 

while(start<=end){
    if(arr[mid]==target){
        index=mid;
        break;
    }
    else if(arr[mid]<target)
      start=mid+1;

   else{
    index=mid;
    end=mid-1;
   }
}
//tc=o(logn)
//sc=o(1)
//note imp observation 
//Why index = n ?
//Yeh special case hai “search insert position” problem me.
//Jab target sabse bada hota hai aur kahin nahi milta, to usko last ke baad insert karna hota hai.
//sliye answer = n (size of array).

here we take an exmaple 1 4 6 8 10 14 16 18 ande here target element is 20 
//Normal binary search me -1 return karte agar nahi milta.

//Lekin “Search Insert Position” problem me hamesha ek valid position return karna hota hai jahan target insert hoga.

//Target mila → uska index.

//Target nahi mila → insertion index (ho sakta hai 0, middle, ya n).


//space complexity of insertion sort is 
//auxiliary space mene i and j constant liye hai so O(1) hai
//tc is  i=1 so j=1 to 1 chalega means 1 times
//and when i=2 so j=2 to 1 chla means 2 time chla 
//and so on ese hai when i=n-1 hai and j=n-1 to 1 hai then ye n-1 chala
//so its time complexity is O(n^2) hai worse case ke liyeh

//best case already soorted ho array ex 1 2 3 4 5 
//if size of array is n then hame n-1 comparison karne hote 
// so best case ki tc is O(n) OR OMEGA n  hAI 

//WORST ACSE KE LIYE 
//(N-1) +N+N+1+......N(N-1)/2 NOTE SUM OF ALL CASES /TOTAL CASES
//THETHA (N^2) HAI