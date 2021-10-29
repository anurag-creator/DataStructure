#include<bits/stdc++.h>
using namespace std;
void FindTriplate(int *arr,int n,int sum){
    sort(arr,arr+n);
     int start,end;
    for(int i=0;i<n-2;i++){
        int start=i+1;
        int end=n-1;
        while(start<=end){
            if(arr[i]+arr[start]+arr[end]==sum){
                cout<<"("<<arr[i]<<","<<arr[start]<<","<<arr[end]<<")"<<endl;
                break;
            }
            else{
                arr[i]+arr[start]+arr[end]>sum ?end--:start++;
            }
        }
        
    }
}
int main(){
    int arr[]={ 1, 4, 45, 6, 10, 8};
    int sum=22;
    int n=sizeof(arr)/sizeof(arr[0]);
    FindTriplate(arr,n,sum);
}