/*ch7 para.c*/
#include <stdio.h>
#include <stdlib.h>
void list(char,int);
int main(){
	int i;
	list('*',10);
	list('#',15);
	i=20;
	list('A',i);
	system("PAUSE");
	return 0;
}
void list(char ch,int count){
	int i;
	for(i=1;i<=count;i++){
		printf("%c",ch);
	}
	printf("\n");
}
