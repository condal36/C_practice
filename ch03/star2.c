/*ch3 star2.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	char name[20];
	
	printf("What's your name? \n");
	scanf("%*s %*s %s",name);
	printf("\nGod! Your name is %s.\n",name);
	system("PAUSE");
	return 0;


}

