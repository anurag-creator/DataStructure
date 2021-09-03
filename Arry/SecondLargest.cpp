#include<iostream>
#include<climits>
using namespace std;
int SecondLargest(int arr[],int n){
    int res=-1;
    int largest=0;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest]){
            if(res==-1 || arr[i]>arr[res]){
                res=i;
            }
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
    cout<< " Second Largest Element in Array :" <<endl;
    cout<<SecondLargest(arr,n);

}