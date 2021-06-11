/*ch02 oct_hex.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int base;
	base=100;
	printf("Dec= %d Oct=%o Hex=%x.\n",base,base,base);
	printf("Dec= %#d Oct=%#o Hex=%#x.\n",base,base,base);
	printf("Dec = %#d Oct=%#o Hex-%#X. \n",base,base,base);
	system("PAUSE");
	return 0;


}

