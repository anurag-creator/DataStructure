#include<iostream>
using namespace std;
void MoveAllNegativePossitive(int *arr,int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]+arr[j]==0){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
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
    MoveAllNegativePossitive(arr,n);
}