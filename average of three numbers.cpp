#include<stdio.h>

void average(int,int, int);
float a,b,c;

int main(){
	
	printf("enter three numbers: ");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	
	average(a,b,c);
}

void average(int x,int y,int z){
	float avg;
	avg=(x+y+z)/3;
	
	printf("the average is: %f",avg);
}
