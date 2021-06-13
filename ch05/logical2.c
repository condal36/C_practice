/*ch5 logical2.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int num;
	printf("Please input a number between 1 to 100: ");
	scanf("%d",&num);
	if((num>=1)&&(num<=100)){
		printf("Valid number %d!\n",num);
	}
	else{
		printf("Invalid number %d.\n",num);
	}
	printf("Bye Bye!\n");
	system("PAUSE");
	return 0;


}

