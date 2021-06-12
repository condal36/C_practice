/*ch3 vlaue2.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int scanf_value;
	int i =10;
	int j=20;
	int k =30;
	printf("Input three decimal value :\n");
	scanf_value=scanf("%d %d %d",&i,&j,&k);
	printf("\nReturn value is %d.\n",scanf_value) ;
	printf("i = %d\n",i);
	printf("j = %d\n",j);
	printf("k = %d\n",k);
	system("PAUSE");
	return 0;


}

