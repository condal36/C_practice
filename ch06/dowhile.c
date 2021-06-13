/*ch6 dowhile.c*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 6
int main(){
	int i=1;
	do{
		printf("%d\n",i++);
	}while(i<=MAX);
	system("PAUSE");
	return 0;


}

