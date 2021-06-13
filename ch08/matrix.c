/*ch8 matrix.c*/
#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COLUMN 5
int main(){
	int matrix[ROW][COLUMN];
	int trans[COLUMN][ROW];
	int i,j;
	printf("Input source matrix 3*5\n");
	for(i=0;i<ROW;i++){
		for(j=0;j<COLUMN;j++){
			printf("matrix[%d][%d]====>",i,j);
			scanf("%d",&matrix[i][j]);
		}
		printf("\n");
	}
	//matrix transpose
	for(i=0;i<ROW;i++){
		for(j=0;j<COLUMN;j++){
			trans[j][i]=matrix[i][j];
		}
	}
	printf("After Transposing...\n\n");
	printf("Source matrix :\n");
	for(i=0;i<ROW;i++){
		for(j=0;j<COLUMN;j++){
			printf("%5d",matrix[i][j]);
		}
		printf("\n");
	}
	printf("\nTransposed matrix :\n");
	for(i=0;i<COLUMN;i++){
		for(j=0;j<ROW;j++){
			printf("%5d",trans[i][j]);
		}
		printf("\n");
	}	
	
	system("PAUSE");
	return 0;


}

