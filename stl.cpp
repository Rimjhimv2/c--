#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5};
    //vec.erase(vec.begin());//1st element vector ka delete krega
//vec.erase(vec.begin()+2);
//vec.erase(vec.begin()+1,vec.begin()+2);
//vec.insert(vec.begin()+2,100);
vec.clear();
    //vector<int>vec2(vec1);
    //vector 2 mai vector 1 ki value dal di

    //vec.push_back(1);
    //vec.push_back(2);
    //vec.push_back(3);
    //vec.push_back(4);
    //vec.push_back(5);
    //vec.pop_back();
    for(int val:vec){
        cout<<val<<" ";//is a range-based for loop in C++ which goes through each element in the vector vec.
    }
    cout<<endl;
    //cout<<"vec at index 2 is"<<vec2[2];
    //cout<<"vec at front is"<<vec2.front();
    //cout<<"vec at back is"<<vec2.back();
    cout<<"size of vector"<<vec.size()<<endl;
    
    cout<<"capacity  of vector"<<vec.capacity()<<endl;
    cout<<"is empty"<<vec.empty()<<endl;
    //vector ki internal capacity same rehti becz initial vector 5 size ka create hua tha
    

    return 0;

}


   