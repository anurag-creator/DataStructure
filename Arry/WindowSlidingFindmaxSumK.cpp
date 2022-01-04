#include<iostream>
using namespace std;

//Sliding window techniqe 0(n)
int FindmaxSumK(int arr[],int n,int k){
    int currSum=0;
    for(int i=0;i<k;i++)
        currSum+=arr[i];
    int maxSum=currSum;
    for(int i=k;i<n;i++){
        currSum+=arr[i]-arr[i-k];
        maxSum=max(maxSum,currSum);
    }
    return maxSum;
}
int main(){
    int arr[]={1,8,30,-5,20,7},n=6,k=3;
    cout<<FindmaxSumK(arr,n,k);
}