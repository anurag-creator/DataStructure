#include<bits/stdc++.h>
using namespace std;
//Naive
int IndexOfFirstOcc1(int *arr,int n,int x){
      for(int i = 0; i < n; i++)
		if(arr[i] == x)
			return i;

	return -1;
}
//Efficient Iterative
int IndexOfFirstOcc2(int *arr,int n,int x){
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
//Efficient Recursive
int Helper(int *arr,int start,int end,int x){
     while(start<=end){
         int mid=start+(end-start)/2;
         if(arr[mid]>x)
             return Helper(arr,start,mid-1,x);
         else if(arr[mid]<x)
             return Helper(arr,mid+1,end,x);
         else{
               if(mid==0 || arr[mid-1]!=x)
                     return mid;
               else
                  end=mid-1;
        }
     }
     return -1;
}
int IndexOfFirstOcc3(int *arr,int n,int x){
     int start=0;
     int end=n-1;
     return Helper(arr,start,end,x);
}
int main(){
    int arr[]={10,20,30},n=3;
    int x=15;
    cout<<IndexOfFirstOcc3(arr,n,x);
}