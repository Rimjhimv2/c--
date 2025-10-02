#include <iostream>
using namespace std;
int main(){
    /*int a;
    cin>>a;
    if(a>0){
        cout<<"a is positive "<<endl;
    }
    else{
        cout<< " ais neg"<<endl;
    }
    int c,d;
    cin>> c>>d;
    cout<< "value of a and b is" << c<< d << endl;
    
    int e;
    cout<<"enter the value of e "<<endl;
    cin>> e;
    if(e>0){
        cout<<"e is positive ";

    }
    else{
        cout<< "e is 0";
    }
    int f= 2;
    int g=f+1;
    if((f=2)==g){
        cout<<f;
    }
    else{
        cout<<f+1;
    }
    int n ;
    cin>> n;
    int i=1;
    while(i<=n){
      //cout<<i<<endl;
      //i=i+1;
      
      sum=sum+i;
      i=i+1;
cout<<"the sum is" <<endl;
    }

    int n;
    cin >> n;

    bool isPrime = true;  // assume it's prime

    int i = 2;
    while (i < n) {
        if (n % i == 0) {
            isPrime = false;
            break; // no need to check further
        }
        i++;
    }

    if (isPrime && n > 1) {
        cout << "Prime" << endl;
    } 
    else {
        cout << "Not Prime" << endl;
    }*/
   int n;
   cin>>n;
   int i=2;
   while(i<n){
    if(n%i==0){
        cout<<"not prime"<<i<<endl;

    }
    else{
        cout<<"prime for"<< i<< endl;
    }
   }
   
return 0;
}

   