#include<stdio.h>

int main(){
	int i, j;
	int matrix[3][4] = { {1, 2, 3, 4}, {5,6,7,8}, {9,10,11,5} };
	int index_i, index_j;
	int max = matrix[0][0];
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			printf("%d ", matrix[i][j]);
			if(max < matrix[i][j]){
				max = matrix[i][j];
				index_i = i;
				index_j = j;
			}
		}
		printf("\n");
	}
	printf("%d\n", max);
	printf("Index: (%d, %d)", index_i+1, index_j+1);
	
}
