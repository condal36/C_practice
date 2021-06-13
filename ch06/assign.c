/*ch6 assigns.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int i;
	int x,y;
	printf("  Step  Exp\n\n");
	for(i=x=y=1;i<=8;i++,x+=2,y*=2){
		printf("  %2d  %4d\n",x,y);
	}
	system("PAUSE");
	return 0;


}

