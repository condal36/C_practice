/**/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int a[5]={1,2,3,4,5},i;
	int *p=a;
	for(i=0;i<5;i++){
		printf("%d *p[%d]=%d\n",a,i,*(p++));
	}
	for(i=0;i<5;i++){
		printf("\n%d *p[%d]=%d\n",a,i,*(++p));
	}/*
	for(i=0;i<5;i++){
		printf("%p",*(++a));
	}*/
	system("PAUSE");
	return 0;


}

