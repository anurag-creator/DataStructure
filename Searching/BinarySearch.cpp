#include <iostream>
using namespace std;
int BinarySearch(int arr[], int n, int x){
	int start = 0, end = n - 1;
	while(start<= end){
		int mid = (start+end)/2;
		if(arr[mid] == x)
			return mid;
		else if(arr[mid] > x)
			end = mid - 1;
		else
			start= mid + 1;
	}
	return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60}, n = 6;
	int x = 25;
	cout<<BinarySearch(arr,n,x);
	return 0;
}