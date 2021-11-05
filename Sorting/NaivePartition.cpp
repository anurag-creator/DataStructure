#include <bits/stdc++.h>
using namespace std;
void partition(int arr[], int l, int h, int p){
    int temp[h-l+1],index=0;
    for(int i=l;i<=h;i++)
        if(arr[i]<=arr[p] && i != p){
                temp[index]=arr[i];index++;
            }
    temp[index++] = arr[p];
    for(int i=l;i<=h;i++)
        if(arr[i]>arr[p]){
                temp[index]=arr[i];index++;
            }
    for(int i=l;i<=h;i++)
        arr[i]=temp[i-l];
}
 
int main() {
    int arr[]={5,13,6,9,12,11,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	partition(arr,0,n-1,3);
	for(int x: arr)
	    cout<<x<<" ";
}