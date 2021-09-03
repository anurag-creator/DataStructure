#include<iostream>
#include<climits>
using namespace std;
void leftRotatebyone(int arr[],int n){
    int temp=arr[0];
    for(int i=1;i<n;i++)
              arr[i-1]=arr[i];
        arr[n-1]=temp;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   leftRotatebyone(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}