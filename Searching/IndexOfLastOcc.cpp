#include<bits/stdc++.h>
using namespace std;
//Iterative
int IndexOfLastOcc(int *arr,int n,int x){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(x>arr[mid]){
            start=mid+1;
        }
        else if(arr[mid]>x){
            start=mid-1;
        }
        else{
            if(mid==0 || arr[mid + 1] != arr[mid] )
                return mid;
            else
                start=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[]={10,20,30},n=3;
    int x=20;
    cout<<IndexOfLastOcc(arr,n,x);
}