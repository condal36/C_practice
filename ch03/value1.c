/*ch3 value1.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int i=10,j=20;
	char str[10]="Stanford";
	int printf_value;
	
	printf_value=printf("%s\n",str);
	printf("Return value is %d\n",printf_value);
	printf_value=printf("%d + %d = %d\n",i,j,i+j);
	printf("Return value is %d\n",printf_value);
	printf("\n\n");
	system("PAUSE");
	return 0;


}

