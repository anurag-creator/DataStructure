#include<iostream>
using namespace std;
int MaximumConsucativeOne(int arr[],int n){
    int result=0;
    int count=0;
    for(int i=1;i<n;i++){
         if(arr[i]==0){
             count=0;
         }  
         else{
             count++;
             result=max(count,result);
         }
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<MaximumConsucativeOne(arr,n);
}