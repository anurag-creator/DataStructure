/*
arr=[15,10,18,12,4,6,2,8]
o/p=[-1,15,-1,18,12,12,6,12]
*/
#include<bits/stdc++.h>
using namespace std;
//Naive Approach
void PreviousGreterElement(int *arr,int n){
    for(int i=0;i<n;i++){
        int j;
        for( j=i-1;j>=0;j--){
            if(arr[i]<arr[j]){
                cout<<arr[j]<<" ";
                break;
            }
        }
        if(j==-1){
            cout<<" -1"<<" ";
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
    PreviousGreterElement(arr,n);
}