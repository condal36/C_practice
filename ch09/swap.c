/*ch9 swap*/
#include <stdio.h>
#include <stdlib.h>
void swap(int*,int*);
int main(){
	int x=14,y=62;
	printf("Initial ...\n");
	printf(" x=%d y=%d",x,y);
	swap(&x,&y);
	printf("\nAfter swap...\n");
	printf(" x=%d y=%d",x,y);
	system("PAUSE");
	return 0;
}

void swap(int *a,int *b){
	int tmp;
	printf("\nIn swap()...\n");
	printf("*a=%d *b=%d\n",*a,*b);
	tmp=*a;
	*a=*b;
	*b=tmp;
	printf("End of swap()...\n");
	printf("*a=%d *b=%d\n",*a,*b);
}
