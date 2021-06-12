/*ch3 test.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	float f_num=123.456;
	printf("%%f is %f\n\n",f_num);
	double f_num2=123.456;
	printf("double is %f\n\n",f_num2);
	double k=123e-4;
	printf("%%f is %f\n%%lf is %lf\n\n",k,k);
	char c[10];
	printf("請輸入學號:\n");
	scanf("%s",c);
	printf("%s 的平實期中考以及期末考成績",c);
	system("PAUSE");
	return 0;


}

