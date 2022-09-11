#include<stdio.h>
int main(){
	int a,fact = 1,i;
	printf("Enter the Number : ");
	if(!(scanf("%d",&a)) || a < 0){
		printf("Invalid Input!!");
	}
	else{
		for(i = 1; i< a+1;i++){
			fact = fact*i;
		}
		printf("The Factoria of %d is %d",a,fact);
	}
	return 0;
}
