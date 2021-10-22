#include <bits/stdc++.h>
using namespace std;
//Naive Approach
bool isSum(int arr[], int n, int sum){
    for(int i=0;i<n;i++){
        int currSum=0;
        for(int j=i;j<n;j++){
           currSum+=arr[j];
           if(currSum==sum)
                return true;
        }
    }
    return false;
}
//Efficient Approach

bool isSum2(int arr[], int n, int sum){
    unordered_set<int> s;
    int preSum = 0;
    for(int i = 0; i < n; i++){   
        if(preSum==sum)
            return true;
        preSum += arr[i];
        if(s.find(preSum-sum) != s.end())
          return true;
        s.insert(preSum);
    }
    return false;
}
int main(){
    int arr[] = {5, 8, 6, 13, 3, -1};
    int sum=22;
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << isSum(arr, n, sum);
}