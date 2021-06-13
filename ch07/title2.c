/*ch7 title2.c*/
#include <stdio.h>
#include <stdlib.h>
void title(void);
void choose(char);
void process(void);

int main(){
	process();
	process();

	system("PAUSE");
	return 0;
}
void process(void){
	char ch;
	title();
	
	printf("\n Choose ===>");
	ch=getche();
	printf("\n Echo: ");
	choose(ch);
}
void title(void){
	printf("\n\n MENU\n\n");
	printf(" [1] one  [2]two\n");
	printf(" [3]three [4]four\n");
}
void choose(char ch){
		switch(ch){
		case '1':printf("ONE");
				 break;
		case '2':printf("TWO");
				 break;
		case '3':printf("THREE");
				 break;
		case '4':printf("FOUR");
	}
}
