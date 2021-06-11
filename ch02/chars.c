/*ch2 chars.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	char new_line='\xA';
	char beep='\07';
	char tab=9;
	char black_slash='\\';
	char single_quote='\'';
	printf("Characters display testing...\n\n");
	printf(" Old Line%c	New Line.\n",new_line);
	printf(" Beeping...%c\n",beep);
	printf(" BlackSlash:%c\n",black_slash);
	printf(" Don%ct be confused..\n",single_quote);
	system("PAUSE");
	return 0;


}

