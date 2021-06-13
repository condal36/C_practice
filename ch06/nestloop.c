/*ch6 nestloop.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		printf("i=%d\n",i);
		for(j=1;j<=3;j++){
			printf("  j=%d\n",j);
		}
	}
	system("PAUSE");
	return 0;


}

