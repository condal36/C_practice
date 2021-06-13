/*ch7 title.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	char ch;
	printf("\n\n MENU\n\n");
	printf("[1] one [2]two\n");
	printf("[3]three [4]four\n");
	
	printf("\n Choose ===>");
	ch=getche();
	printf("\n Echo: ");
	switch(ch){
		case '1':printf("ONE");
				 break;
		case '2':printf("TWO");
				 break;
		case '3':printf("THREE");
				 break;
		case '4':printf("FOUR");
	}
	system("PAUSE");
	return 0;


}

