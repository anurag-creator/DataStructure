#include<bits/stdc++.h>
using namespace std;
//Naive approach
int LongestSubArrayWithGivenSum(int arr[],int n, int sum){
    int res=0;
    for(int i=0;i<n;i++){
        int preSum=0;
        for(int j=i;j<n;j++){
            preSum+=arr[j];
            if(preSum==sum)
                res=max(res,j-i+1);
            
        }
    }
    return res;
}
int maxlen(int arr[],int n,int sum){
    unordered_map<int,int>m;
    int preSum=0;
    int res=0;
    for(int i=0;i<n;i++){
        preSum+=arr[i];
        if(preSum==sum)
             res==i+1;
        if(m.find(preSum)==m.end())
             m.insert({preSum,i});
        if(m.find(preSum-sum)!=m.end())
             res=max(res,i-m[preSum-sum]);
    }
    return res;
}
int main(){
    int arr[] = {5,8,-4,-4,9,-2,2};
    int sum=0;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << maxlen(arr, n, sum);
}
    

