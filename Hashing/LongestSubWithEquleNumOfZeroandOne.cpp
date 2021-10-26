#include<bits/stdc++.h>
using namespace std;
//Naive Approach theta of (n^2)
int LongestSubWithEquleNumOfZero(int *arr,int n){
   int res=0;
   for(int i=0;i<n;i++){
       int Co=0,C1=0;
       for(int j=i;j<n;j++){
           if(arr[j]==0){
               Co++;
           }
           else{
               C1++;
           }
           if(C1==Co){
               res=max(res,Co+C1);
           }
       }
   }
   return res;
}
//Efficient Approach
int LongestSubArrayWithZeroSum(int *arr,int n){
    unordered_map<int, int> ump;
    int sum = 0, maxLen = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum == 0)
         maxLen = i+1;
         
        if(ump.find(sum+n) != ump.end()){
            if(maxLen < i - ump[sum+n])
             maxLen = i - ump[sum+n];
             
        }
        else ump[sum + n] = i;
    }
    
    return maxLen;
}
int LongestSubWithEquleNumOfZero2(int *arr,int n){
     //replace zero with -1
     for(int i=0;i<n;i++){
         if(arr[i]==0){
             arr[i]=-1;
         }
     }
     //Now Find the LongestSubsetWithZeroSum
     return LongestSubArrayWithZeroSum(arr,n);
}
int main(){
    int n;
    cout<<"Enter the Size of Array :"<<endl;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<LongestSubWithEquleNumOfZero(arr,n)<<endl;
    cout<<LongestSubWithEquleNumOfZero2(arr,n);
}