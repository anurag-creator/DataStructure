#include<iostream>
#include<climits>
using namespace std;
int MaximumSubArray(int arr[],int size,int k){
    if(size<k){
        return -1;
    }
    int start=0;
    int sum=0;
    int mxSum=INT_MIN;
    for(int end=0;end<size;end++){
        sum+=arr[end];
        if(end-start+1==k){
            mxSum=max(mxSum,sum);
            sum=sum-arr[start];
            start++;
        }
    }
    return mxSum;
}
int main(){
    int n;
    cout << "Enter the size of Array" << endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<< " Enter the Window size "<<endl;
    cin>>k;
    int ans= MaximumSubArray(arr,n,k);
    cout<<"Max sub arry sum"<<endl;
    cout<<ans<<endl;
}