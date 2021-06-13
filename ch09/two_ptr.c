/*ch9 two_ptr.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int a[]={0,1,2,3,4};
	int *p[]={a,a+1,a+2,a+3,a+4};
	int **pp=p;
	printf("*p[2]=%d\n",*p[2]); 
	printf("**pp=%d\n",**pp); 
	printf("*(*(pp+2)+2)=%d\n",*(*(pp+2)+2));
	system("PAUSE");
	return 0;


}

