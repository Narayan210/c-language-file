//wap to check wheather the given number is prime or composite 

#include<stdio.h>
int main(){
	int number,count=0;
	
	printf("enter the number: ");
	scanf("%d",&number);
	
	for(int i=0;i<=number;i=i+1){
		if (number%i==0){
			count=count+1;
		}
	}
	if (count==2){
		printf("it is a prime number.");
	}
	
	else{
		printf("it is the composite number.");
	}
	
	
	return 0;
}
