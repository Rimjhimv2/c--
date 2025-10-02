
// <<,>> in case of pos num padding with 0 se hoga
// in case of negative padding done on the basis of compiler

#include <iostream>
using namespace std;
int main(){ 
    int n;
cout<<"enter n"<< endl;
cin>>n;
int sum=0;

for(int j=1;j<=n ;j++){
    
        sum+=j;
}
cout<< sum<< endl;
}