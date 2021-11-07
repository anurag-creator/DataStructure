#include <iostream>
#include <limits.h>
using namespace std;
//Naive Approah
//Complexity ThetaOF(n)
//OverFlow for higher value
int countTrailingZero(int n){
	int fact=1;
	for(int i=2;i<n;i++)
		fact=fact*i;
	int res=0;
	while(fact%10==0){
		res++;
		fact=fact/10;//update fact
	}
	return res;
	
}
 int countTrailingZeros(int n){
	int res = 0;

	for(int i=5; i<=n; i=i*5){
		res = res + (n / i);
	}

	return res;
}
int main() {
    
    	int number = 10;
    	
    	cout<<countTrailingZeros(number);
    	
    	return 0;
}