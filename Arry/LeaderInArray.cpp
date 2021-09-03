#include<iostream>
#include<climits>
using namespace std;
void  LeaderInArray(int arr[],int n){
    int leader=arr[n-1];
    cout<<leader<<" ";
    for(int j=n-2;j>=0;j--){
        if(leader<arr[j]){
            leader=arr[j];
            cout<<leader<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    LeaderInArray(arr,n);
}