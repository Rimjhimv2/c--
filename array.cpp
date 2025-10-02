#include <iostream>
using namespace std;
/** int main (){
int second[3]={5,7,11};
cout<<"value at 2 index"<<second[2]<<endl;
int third[15]={2,7};
int n=15;
cout<<"print the array"<<endl;
for(int i=0;i<n; i++){
    cout<<third[i]<<" ";
}
int fourth[10]={0};
int m=10;
cout<<"print the array"<<endl;
for(int j=0;j<m; j++){
    cout<<fourth[j]<<" ";
}
 }*/
 //using function in array(2nd method)
 void Printarray(int arr[],int size){
    cout<<"printing the array"<<endl;
    for(int i=0;i<=size;i++){

cout<<arr[i]<<endl;
    }}
    int main(){
int second[3]={5,7,11};
cout<<"value at 2 index"<<second[2]<<endl;
int third[15]={2,7};
int n=15;
Printarray(third,15);
int fourth[10]={0};
int m=10;
Printarray(fourth,10);

 }