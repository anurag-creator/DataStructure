#include<bits/stdc++.h>
using namespace std;
//Naive Approach
int SearchInInfiniteSizeArray1(int *arr,int x){
   int i=0;
   while(true){
       if(arr[i]==x)return i;
       if(arr[i]>x)return -1;
       i++;
   }
   return i;
}
//Efficient Approach
int BinarySearch(int *arr,int low,int high,int x){
    if(low > high)
		return -1;
	int mid = (low + high) / 2;
	if(arr[mid] == x)
		return mid;
	else if(arr[mid] > x)
		return BinarySearch(arr, low, mid - 1, x);
	else
		return BinarySearch(arr, mid + 1, high, x);
}
int SearchInInfiniteSizeArray(int *arr,int x){
    if(arr[0]==x)return 0;
    int i=1;
    while(arr[i]<x)
         i=i*2;
    if(arr[i]==x)return i;
    return BinarySearch(arr,i/2+1,i-1,x);

}
int main(){
    int arr[]={1,1,2,3,4,5},n=6;
    int x=5;
    cout<<SearchInInfiniteSizeArray(arr,x);
}