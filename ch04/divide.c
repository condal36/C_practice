/*ch4 divide.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int op1=10;
	int op2 = 4;
	double op3= 10.0;
	double op4 = 4.0;
	printf("Divide and Trunc ...\n\n");
	printf("	%d/%d=%d\n",op1,op2,op1/op2);
	printf("	%d/%.2f=%.2f\n",op1,op4,op1/op4);
	printf("	%.2f/%.2f=%.2f\n",op3,op4,op3/op4);
	printf("	%.2f/%d=%.2f\n",op3,op2,op3/op2);
	system("PAUSE");
	return 0;


}

