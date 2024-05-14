//write a function to convert celsius to fahrenheit

#include<stdio.h>

float converttemp(float celsius);


int main(){
	
	float n;
	printf("enter the temp in celsius: ");
	scanf("%f",&n);
	

float far =converttemp(n);
	printf("the temp in far is: %f",far);
	
	return 0;
}

float converttemp(float celsius){
	float far= celsius*(9.0/5.0) +32;
	
	return far;
}

