#include<iostream>
#include<climits>
using namespace std;
void MoveZero(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
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
   MoveZero(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}