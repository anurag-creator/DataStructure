#include<bits/stdc++.h>
using namespace std;
//Naive Approach
/*
int LongestCommonSpanWithSameSumInBinaryArray(int *arr1,int *arr2,int n){
    int res=0;
    for(int i=0;i<n;i++){
        int sum1=0,sum2=0;
        for(int j=i;j<n;j++){

            sum1+=arr1[j];
            sum2+=arr2[j];

            if(sum1==sum2)
            res=max(res,j-i+1);
        
        }
     }
    return res;
}*/
//Efficient Approch
int LongestCommonSpanWithSameSumInBinaryArray(bool *arr1, bool *arr2,int n){
    int temp[n];
    for(int i=0;i<n;i++){
        temp[i]=arr1[i]-arr2[i];
    }
    unordered_map<int, int> mp; 
    int sum=0;
    int maxLen=0;
    for(int i=0;i<n;i++){
        sum+=temp[i];
        if(sum==0)
           maxLen=i+1;
        if(mp.find(sum)!=mp.end())
        maxLen=max(maxLen,i-mp[sum]);

        else
            mp[sum]=i;
    }
    return maxLen;
}
int main(){
   	bool arr1[] = {0, 1, 0, 1, 1, 1, 1}; 
	bool arr2[] = {1, 1, 1, 1, 1, 0, 1}; 
	int n = sizeof(arr1)/sizeof(arr1[0]); 
    cout<<LongestCommonSpanWithSameSumInBinaryArray(arr1,arr2,n);
}