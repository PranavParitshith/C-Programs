#include<stdio.h>
int main(){
	int n, m = 0, i;
	printf("Enter Total terms : ");
	scanf("%d", &n);
	printf("Fibonacci series terms are: \n");
	for(i = 1; i <= n; i++) {
		printf("%d\n", fib(m));
		m++;
	}
	return 0;
}
int fib(int n) {
	if(n == 0 || n == 1)
		return n;
	else
		return(fib(n-1) + fib(n-2));
}
