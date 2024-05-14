//wap to print the largest number by asking user the input

#include<stdio.h>

int main(){
	int num1,num2,num3;
	printf("enter the numbers");
	printf("\n");
	scanf("%d\n""%d\n""%d\n",&num1,&num2,&num3);
	
	if (num1>=num2 && num1>=num3){
		printf("so num1 is the greatest one.",num1);
	}
	
    if (num2>=num1 && num2>=num3){
		printf("so num2 is the greatest one.",num2);
	}
	
	else{
		printf("so num3 is the greatest one.",num3);
	}
		
	
	
	
	return 0;
}
