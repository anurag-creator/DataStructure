#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int pairSum(int *arr,int n){
    unordered_map<int,int>freq;
    int pairCount=0;
    for(int i=0;i<n;i++){
        int complement=-arr[i];
        if(freq.find(complement)!=freq.end()){
            pairCount+=freq[complement];
        }
        ++freq[arr[i]];
    }
    return pairCount;
}
int main(){
    int arr[] = { -10, -20, 20, 10, 10, 20, 5, 20 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout<<pairSum(arr, n);
	return 0;
}
