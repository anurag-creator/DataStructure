#include<bits/stdc++.h>
using namespace std;
//Naive Apprach
int SearchInSortedArray2(int *arr,int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x)
            return i;
    }
    return -1;
}
//Efficient Solution log(n)
int SearchInSortedArray(int *arr,int n,int x){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+mid/2;
        if(arr[mid]==x)return mid;//Normal Binary Search
        if(arr[mid]>=arr[start]){//Left Half Sorted
            if(arr[mid]>x && arr[start]<=x){
                end=mid-1;
            }

            else{
                start=mid+1;
            }
        }
        else{
            if(x>=arr[mid]&& x<=arr[end]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }

    }
    return -1;
}
int main(){
  int arr[]={10,20,30,40,50,8,9},n=7;
  int x=30;
  cout<<SearchInSortedArray(arr,n,x);
}