#include<iostream>
using namespace std;
int maxEvenOddSubArray(int arr[],int n){
    int res=1;
    for(int i=1;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if((arr[j]%2==0 && arr[j-1]%2!=0) || (arr[j]%2!=0 && arr[j-1]%2==0)){
                count++;
            }
            else{
                break;
            }
            res=max(res,count);
        }
    }
    return res;
}
int maxEvenOddSubArrayFinal(int arr[],int n){
    int res=1;
    int count=1;
    for(int i=1;i<n;i++){
        if((arr[i]%2==0 && arr[i-1]%2!=0) || (arr[i]%2!=0 && arr[i-1]%2==0)){
                count++;
                res=max(res,count);
            }
        else{
            count=1;
        }
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
    cout<<maxEvenOddSubArrayFinal(arr,n);

}