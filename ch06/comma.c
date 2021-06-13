/*ch6 comma.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int x,y,z;
	printf(" x  y \n\n");
	for(x=1,y=10;x<=6&&y<=60;x++,y=y+10){
		printf(" %d %d\n",x,y);
	} 
	printf("\n");
	z=(x=100,(y=1000)+14);
	printf("x=%d y=%d z=%d\n",x,y,z);
	system("PAUSE");
	return 0;


}

