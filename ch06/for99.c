/*ch6 for99.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int i,j;
	for(i=1;i<=9;i++){
		for(j=1;j<=9;j++){
			printf("%-4d",i*j);
		}
		printf("\n");
	}
	system("PAUSE");
	return 0;


}

