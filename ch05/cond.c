/*ch5 cond.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int x,y;
	int abs, max;
	int year;
	printf("\nInput x:");
	scanf("%d",&x);
	abs=(x>=0)?x:-x;
	printf("|x|=%d\n",abs);
	printf("\nInput y :");
	scanf("%d",&y);
	
	abs=(y>=0)?y:-y;
	printf("|y| = %d\n",abs);
	
	max=(x>y)?x:y;
	printf("\nMaximum value of %d and %d is %d.\n",x,y,max);
	
	printf("\nHow old are you?");
	scanf("%d",&year);
	printf("Your are %d year%sold.\n",year,(year>1)?"s ":" ");
	system("PAUSE");
	return 0;


}

