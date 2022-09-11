#include<stdio.h>
int main(){
	int ans = 1;
	int n,a,b,i,fib;
	printf("Enter the Limit : ");
	if(!(scanf("%d",&n))){
		printf("Invalid Input!!");
	}
	else{
		if(n>0){
			a = -1;
			b = 1;
			fib = a+b;
			for(i=0;i<n;i++){
				printf("%d\t",fib);
				a = b;
				b = fib;
				fib = a + b;
			}
			printf("\n");
		}
		else {
			a = 1;
			b = -1;
			fib = a+b;
			for(i=0;i>n;i--){
				printf("%d\t",fib);
				a = b;
				b = fib;
				fib = a +b;
			}
			printf("\n");
		}
	}
	return 0;
}
	
