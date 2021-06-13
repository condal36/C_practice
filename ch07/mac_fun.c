/*ch7 mac_fun.c*/
#include <stdio.h>
#include <stdlib.h>
#define SQUARE(n) n*n
int main(){
	int num1,num2;
	num1=SQUARE(3),num2=SQUARE(10);
	printf("num1=%d num2=%d\n",num1,num2);
	system("PAUSE");
	return 0;
}

