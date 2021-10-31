#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,3,10,11,2,1}, n=6;
    sort(arr,arr+n);
    for(int i:arr)
             cout<<i<<" ";
    cout<<endl;
    cout<<"Sort In Decresing Order"<<endl;
    sort(arr,arr+n,greater<int>());
    for(int i:arr)
             cout<<i<<" ";
    cout<<endl;
}