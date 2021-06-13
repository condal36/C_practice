/*ch6 while99.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int i=1,j=1;
	while(i<=9){
		while(j<=9){
			printf("%-4d",i*j++);
		}
		i++;
		j=1;
		printf("\n");
	}
	system("PAUSE");
	return 0;


}

