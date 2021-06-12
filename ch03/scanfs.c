/*ch3 scanfs.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int num1,num2;
	double f1;
	char str[20];
	
	printf("Input two number :\n");
	scanf("%d %d", &num1,&num2);
	printf("======> %d+%d=%d\n\n",num1,num2,num1+num2);
	
	printf("Input a floating point :\n");
	scanf("%lf",&f1);
	printf("======> %f is %e\n\n",f1,f1);
	
	printf("Input a string:\n");
	scanf("%s",str);
	printf("=====> %s \n\n",str);
	
	printf("Input at most 10 chars:\n");
	scanf("%10s",str);
	printf("=====> %s \n\n",str);
	system("PAUSE");
	return 0;


}

