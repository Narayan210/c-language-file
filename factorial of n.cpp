//fectorial of n

#include<stdio.h>

int fact(int n);

int main(){
	printf("the factorial is : %d",fact(5));
}

int fact(int n){
	if(n==1){
		return 1;
	}
	
	int factnm1=fact(n-1);
	int factn=factnm1*n;
}
