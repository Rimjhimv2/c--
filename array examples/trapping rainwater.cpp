vector<int>height;
Leftmax[n],Rightmax[n];
Leftmax[0]=0;

for(int i=0;i<n;i++){
    Leftmax[i]=max(Leftmax[i-1],height[i-1]);
}
Rightmax[n-1]=0;
for(int i=n-2;i>=0;i--){
    Rightmax[i]=max(Rightmax[i+1],height[i+1]);
}

for(i=0;i<n;i++){
    minheight=min(Leftmax[i])
}

for(int i=0;i<n)