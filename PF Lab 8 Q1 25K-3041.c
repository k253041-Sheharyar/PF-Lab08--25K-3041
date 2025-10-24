#include<stdio.h>

int main(){
	
	int i, j, n, prod;
	
	printf("Enter number for multiplication: \n");
	scanf("%d", &n);
	
	printf("Multiplication Table(1-%d):\n", n);
	for(i=1; i<=n; i++){
		printf("\n%2d: ", i);
		for(j=1; j<=n; j++){
			prod = i*j;
			printf("%5d", prod);
		}
		printf("\n");
	}
	
	return 0;
}
