#include<iostream>
using namespace std;
//Naive Approach O(n*n)
/*
int MaxCircularSumSubArray(int arr[],int n){
    int res=arr[0];
    for(int i=0;i<n;i++){
        int currMax=arr[i];
        int currSum=arr[i];
        for(int j=1;j<n;j++){
            int index=(i+j)%n;
            currSum+=arr[index];
            currMax=max(currSum,currMax);
            res=max(res,currMax);
        }
    }
    return res;
}*/
int NormalSum(int arr[],int n){
    int res=arr[0],maxEnding=arr[0];
    for(int i=1;i<n;i++){
        maxEnding=max(arr[i],maxEnding+arr[i]);
        res=max(res,maxEnding);
    }
    return res;
}
int overAllSum(int arr[],int n){
    int maxNormal=NormalSum(arr,n);
    if(maxNormal<0)
            return maxNormal;
    int arrSum=0;
    for(int i=0;i<n;i++){
        arrSum+=arr[i];
        arr[i]=-arr[i];
    }
    int maxCircular=arrSum+NormalSum(arr,n);
    return max(maxCircular,maxNormal);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     cout<<overAllSum(arr,n);
}