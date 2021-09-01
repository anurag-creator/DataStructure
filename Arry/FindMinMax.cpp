#include<iostream>
#include<climits>
using namespace std;
void FindMinMax(int arr[],int n,int &min, int &max){
    max=arr[0],min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        else if(arr[i]<min){
            min=arr[i];
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=0;
    int max=0;
    FindMinMax(arr,n,min,max);
    cout<<"Maximum Element In Array :"<<max<<endl;
    
    cout<<"Minimum Element In array :"<<min<<endl;
}