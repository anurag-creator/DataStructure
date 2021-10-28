#include<bits/stdc++.h>
using namespace std;
//FirstOcc
int IndexOfFirstOcc(int *arr,int n,int x){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+end/2;
        if(x>arr[mid]){
            start=mid+1;
        }
        else if(arr[mid]>x){
            end=mid-1;
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
//LastOccerance
int IndexOfLastOcc(int *arr,int n,int x){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+end/2;
        if(x>arr[mid]){
            start=mid+1;
        }
        else if(arr[mid]>x){
            end=mid-1;
        }
        else{
            if(mid==n-1 || arr[mid + 1] != arr[mid] )
                return mid;
            else
                start=mid+1;
        }
    }
    return -1;
}
//FirstOccurance
/*
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
}*/
int CountAllOcc(int *arr,int n, int x){
    int first=IndexOfFirstOcc(arr,n,x);
    if(first==-1){
        return 0;
    }
    else
       return IndexOfLastOcc(arr,n,x)- first+1;
}
int main(){
   int arr[]={10,10,10,10,10,10},n=6;
   int x=10;
   cout<<CountAllOcc(arr,n,x)<<endl;
}