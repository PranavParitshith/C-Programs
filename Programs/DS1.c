#include<stdio.h>
#include<math.h>
int main(){
	int a[10][10],b[10][10],mul[10][10],i,j,k;
	float rows,cols;
	printf("Enter the Number of Rows : ");
	if(!(scanf("%f",&rows)) || rows - (int)rows != 0 || rows <= 0){
		printf("Invalid Input!!");
	}
	else{
		printf("Enter the Number of Columns : ");
		if(!(scanf("%f",&cols)) || cols - (int)cols != 0 || cols <= 0){
			printf("Invalid Input!!!");
		}
		else{
			int r= ceil(rows);
			int c = ceil(cols);
			printf("\nEnter the Elements of the First Matrix : \n");
			for(i=0;i<r;i++){
				for(j=0;j<c;j++){
					printf("Enter : ");
					scanf("%d",&a[i][j]);
				}
			}
			printf("\nEnter the Elements of the Second Matrix : \n");
			for(i = 0;i < r;i++){
				for(j = 0;j<c;j++){
					printf("Enter : ");
					scanf("%d",&b[i][j]);
				}
				printf("\n");
			}
			printf("\nThe First Matrix is : \n");
			for(i = 0;i < r;i++){
				for(j = 0;j<c;j++){
					printf("%d\t",a[i][j]);
				}
				printf("\n");
			}
			printf("\nThe Second Matrix is : \n");
			for(i = 0;i < r;i++){
				for(j = 0;j<c;j++){
					printf("%d\t",b[i][j]);
				}
				printf("\n");
			}
			for(i = 0;i<r;i++){
				for(j = 0;j<c;j++){
					mul[i][j] = 0;
					for(k=0;k<c;k++){
						mul[i][j] += a[i][k]*b[k][j];
					}
				}
			}
			printf("\nThe Multiplied Matrix is : \n");
			for(i = 0;i < r;i++){
				for(j = 0;j<c;j++){
					printf("%d\t",mul[i][j]);
				}
				printf("\n");
			}
		}
	}
	return 0;
}
