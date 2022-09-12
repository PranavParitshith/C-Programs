#include<stdio.h>
int main(){
	int a[100],s,n,i,flag = 0;
	printf("Enter the Number of Elements : ");
	scanf("%d",&n);
	for(i = 0;i < n;i++){
		printf("Enter : ");
		scanf("%d",&a[i]);
	}
	printf("\n");
	printf("Enter the Element you want to Search For : ");
	scanf("%d",&s);
	for(i = 0; i< n; i++){
		if(s == a[i]){
			printf("The Element %d is found at index %d\n",s,i);
			flag = 0;
			break;
		}
		else{
			flag = 1;
		}
	}
	if(flag == 1){
		printf("Not Found!\n");
	}
	return 0;
}
