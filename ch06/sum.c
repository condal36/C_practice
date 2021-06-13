/*ch6 sum.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int number;
	int total=0,item=1;
	printf("%d. Input a number to be sumed:\n",item);
	while(scanf("%d",&number)==1){
		total=total+number;
		printf("%d. Input a number to be sumed : \n",++item);
	}
	item--;
	printf("\nThere are %d numbers entered,\n",item);
	printf("their sum is %d\n",total);
	system("PAUSE");
	return 0;


}

