/*ch9 ary_ptr1.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int a[6]={1,2,3,4,5,6};
	double b[6]={1.1,2.2,3.3,4.4,5.5,6.6};
	int i;
	for(i=0;i<6;i++){
		printf("&a[%d]=%p, a+%d=%p\n",i,&a[i],i,(a+i));
	}
	printf("\n");
	for(i=0;i<6;i++){
		printf("&b[%d]=%p, b+%d=%p\n",i,&b[i],i,(b+i));
	}
	printf("%d",sizeof(int));
	system("PAUSE");
	return 0;


}

