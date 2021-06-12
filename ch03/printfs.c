/*ch03 printfs.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	char ch1 = "a",ch2="A";
	int i = 31, j = -1;
	float num = 123.456;
	double num1=123.456;
	char str[30]="This is a car ... SAAB";
	/*output character*/
	printf("Format conversion...\n\n");
	printf("Character : %c %c %c\n\n",ch1,ch2);
	/*output integer number*/
	printf("Decimal : %d %d \n",i,j);
	printf("Unsigned : %u %u \n",i,j);
	printf("Octal: %o \n",i);
	printf("Hexdecimal: %x \n",i);
	printf("Hexdecimal: %X \n",i);
	/*output float point number*/
	printf("Float: %f %e %E\n",num,num,num);
	printf("Double: %f %e %E\n",num1,num1,num1);
	/*output string*/
	printf("String: %s \n\n",str);
	/*output % symbol*/
	printf("Percent: 100%%\n\n");
	system("PAUSE");
	return 0;


}

