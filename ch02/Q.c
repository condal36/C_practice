/*ch02 Q.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int number=107;
	printf("dex=%d oct=%o hex=%x\n",number,number,number);
	printf("dex=%d oct=%#o hex=%#x\n",number,number,number);
	printf("dex=%d oct=%#o hex=%#X\n",number,number,number);
	system("PAUSE");
	return 0;


}

