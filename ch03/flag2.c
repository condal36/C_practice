/*ch3 flag2.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int decimal=31;
	
	printf("Flags...\n\n");
	printf("|%d|\n",decimal);
	printf("|%8d|\n",decimal);
	printf("|%#8o|\n",decimal);
	printf("|%#8x|\n",decimal);
	printf("|%08d|\n",decimal);
	system("PAUSE");
	return 0;


}

