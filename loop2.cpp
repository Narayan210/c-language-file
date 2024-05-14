#include<stdio.h>

int main(){
	int i,j;
	char name[]={"UNIVERSITY"};
	
	for(i=0;i<=10;i++){
		for(j=0;j<i;j++){
			printf("%c",name[j]);
		}
		
	}
	return 0;
}
