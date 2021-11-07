#include <iostream>
#include <limits.h>
using namespace std;
//Basic Version
int gcd1(int a,int b){
    while(a!=b){
		if(a>b){
			a= a-b;
		}
		else{
			b=b-a;
		}	
	}
	return a;
}
//Optimize Euclidean Algorithm

int gcd2(int a, int b){
	if(b==0)
		return a;
	return gcd2(b, a % b);
}

int main() {
    
    	int a = 12, b = 15;
    	cout<<gcd1(a, b);
    	cout<<gcd2(a, b);
    	
    	return 0;
}