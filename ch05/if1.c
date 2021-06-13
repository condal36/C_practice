/*ch5 ifl.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int num;
	printf("Please input a number between 1 to 100 : ");
	scanf("%d",&num);
	if(num<50)
		printf("The number is less than 50!\n") ;
	if(num==50)
		printf("The number is equal to 50!\n") ;
	if(num>50)
		printf("The number is greater to 50!\n") ;	
	system("PAUSE");
	return 0;


}

