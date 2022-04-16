#include<bits/stdc++.h>
using namespace std;

//Naive approach 
//complexity n^2
void stockSpan(int *arr,int n){
    
    for(int i=0;i<n;i++){
        int span=1;
        for(int j=i-1 ;j>=0 && arr[j]<=arr[i];j--){
            span++;
        }
        cout<<span<<" ";
    }
}

//Efficient Solution
//0(N)
void stockSpan2(int *arr,int n){
    stack<int>s;
    s.push(0);
    cout<<"1"<<" ";   //For left most element
    for(int i=1;i<n;i++){
        while(s.empty()==false && (arr[s.top()]<=arr[i])){
            s.pop();
        }
        int span=s.empty() ? i+1 : i-s.top();
        cout<<span<<" ";
        s.push(i);
    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    stockSpan2(arr,n);
}