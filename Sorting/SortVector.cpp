#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){ 
    vector<int>v={5,7,20,10};
    sort(v.begin(),v.end());
    for(int i:v)
         cout<<i<<" ";
    cout<<endl;
    cout<<"Decresing Order Sorting "<<endl;
    sort(v.begin(),v.end(),greater<int>());
    for(int i:v)
        cout<<i<<" ";
    cout<<endl;
}