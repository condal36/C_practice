/*ch6 break.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	char ch;
	printf("press 'Q' or 'q' to quit\n");
	while(1){
		ch=getch();
		if((ch=='Q'||ch=='q')){
			printf("\nQuit!\n");
			break;
		}
		printf(" Key <%c> continued...\n",ch);
	}
	printf("Bye bye!\n");
	system("PAUSE");
	return 0;


}

