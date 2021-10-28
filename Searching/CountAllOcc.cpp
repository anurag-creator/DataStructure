#include<bits/stdc++.h>
using namespace std;
//LastOccerance
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
//FirstOccurance
int IndexOfFirstOcc(int *arr,int n,int x){
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
            if(mid==0 || arr[mid - 1] != arr[mid] )
                return mid;
            else
                end=mid-1;
        }
    }
    return -1;
}
int CountAllOcc(int *arr,int n, int x){
    int first=IndexOfFirstOcc(arr,n,x);
    if(first==-1){
        return 0;
    }
    else
       return (IndexOfLastOcc(arr,n,x)-first+1);
}
int main(){
   int arr[]={20,20,10,10,10,20},n=6;
   int x=10;
   cout<<CountAllOcc(arr,n,x)<<endl;
}