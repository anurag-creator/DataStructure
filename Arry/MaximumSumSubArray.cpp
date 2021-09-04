#include<iostream>
using namespace std;
//Brute Force Approach O(n*n)
int MaximumSumSubArray(int arr[],int n){
    int maxSum=arr[0];
    for(int i=0;i<n;i++){
        int res=0;
        for(int j=i;j<n;j++){
            res=res+arr[j];
            maxSum=max(maxSum,res);
        }
    }  
    return maxSum; 
}
//Efficient Approach O(n)
int MaximumSumSubArrayFinal(int arr[],int n){
    int res=arr[0];
    int maxEnding=arr[0];
    for(int i=1;i<n;i++){
        maxEnding=max(maxEnding+arr[i],arr[i]);
        res=max(res,maxEnding);
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //cout<<MaximumSumSubArray(arr,n);
    cout<<MaximumSumSubArrayFinal(arr,n);

}