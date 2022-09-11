#include<stdio.h>
int main(){
	int a;
	printf("Enter the Number : ");
	if(!scanf("%d",&a)||a < 0){
		printf("Invalid Input!!!\n");
	}
	else{
		if(a%2 == 0){
			printf("The Above Number is an Even Number!!!\n");
		}
		else{
			printf("The Above Number is an Odd Number!!\n");
		}
	}
	return 0;
}
