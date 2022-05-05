#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//Method 1
void MoveAllNegativePossitive(int *arr,int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]+arr[j]==0){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
}
//Method 2
//  n log(n)
void PossitiveNegativePair(int *arr,int n){
    bool pair=false;
    //sort the Arry
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            if(binary_search(arr,arr+n,-arr[i])){
                cout<<arr[i]<<" "<<-arr[i]<<" ";
                pair=true;
            }
        }
        else{
            break;
        }
    }
    if(pair==false){
        cout<<"No Pair Found"<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //MoveAllNegativePossitive(arr,n);
    PossitiveNegativePair(arr,n);
}