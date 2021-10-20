#include<bits/stdc++.h>
using namespace std;
int BinarySearchHelper(int arr[],int start,int end,int element){
     if(end>start){
         int mid=start+(end-start)/2;
         if(arr[mid]==element)
                 return mid;
         if(arr[mid]>element)
                 return BinarySearchHelper(arr,start,mid-1,element);
         else
             return BinarySearchHelper(arr,mid+1,end,element);
     }
     return -1;
}
int BinarySearch(int arr[],int n,int element){
     int start=0;
     int end=n-1;
     return BinarySearchHelper(arr,start,end,element);
}
int main(){
    int n;
    cout<<" Enter the size of Array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the data in Array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int element;
    cout<<"Enter The Element which you want to search"<<endl;
    cin>>element;
    cout<<BinarySearch(arr,n,element);
}