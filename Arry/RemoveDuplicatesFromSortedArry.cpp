#include<iostream>
#include<climits>
using namespace std;
int  RemoveDupilicates(int arr[],int n){
    int res=1;
    for(int i=1;i<n;i++){
        if(arr[i-1]==arr[i]){
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}
