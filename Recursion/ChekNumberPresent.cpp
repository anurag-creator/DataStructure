#include<iostream>
using namespace std;
bool checkNumber(int arr[],int n,int x){
    if(n==0 || n==1)return false;
    if(arr[0]==x||arr[1]==x)return true;
    checkNumber(arr+1,n-1,x);
}
int main(){
int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }
 cout<<checkNumber(arr,n,4);
}