#include<bits/stdc++.h>
using namespace std;
//Naive Approach
int FindPeak1(int *arr,int n){
    if(n == 1)
		return arr[0];
	if(arr[0] >= arr[1])
		return arr[0];
	if(arr[n - 1] >= arr[n - 2])
		return arr[n - 1];

	for(int i = 1; i < n - 1; i++)
		if(arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
			return arr[i];
}
//Efficient Approach
int FindPeak(int *arr,int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+end/2;
        if(mid==0 ||arr[mid-1]<=arr[mid]&& mid==n-1 ||arr[mid]>=arr[mid+1])return mid;
        if(mid>0 && arr[mid-1]>arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[]={5,10,20,15,7},n=5;
    cout<<FindPeak(arr,n);
}