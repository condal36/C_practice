/*ch5 if2.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int num;
	int flag=0;
	num=14;
	if(num<50){
		flag++;
		printf("Message 1...\n");
	}
	if(num>50)
		flag++;
		printf("Message 2...\n");
	
	if(num==50)
		flag++;
	printf("Message 3...\n");
	printf("\nflag is %d\n",flag);
	system("PAUSE");
	return 0;


}

