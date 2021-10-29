 
#include <bits/stdc++.h> 
using namespace std; 
void printPairs(int arr[], int arr_size, int sum) { 
	unordered_set<int> s; 
	for (int i = 0; i < arr_size; i++) { 
		int temp = sum - arr[i]; 

		if (s.find(temp) != s.end()) 
			cout << "Pair is" << sum << " is (" << arr[i] << ", " << temp << ")" << endl; 

		s.insert(arr[i]); 
	} 
} 

int main() { 
	int arr[] = { 1, 4, 45, 6, 10, 8 }; 
	int sum = 16; 
	int n= sizeof(arr) / sizeof(arr[0]); 
	printPairs(arr, n, sum); 
	return 0; 
} 
