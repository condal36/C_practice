/*ch9 ary_ptr4.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int ary[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int *ptr[3]={ary[0],ary[1],ary[2]};
	int i;
	printf("\n");
	for(i=0;i<3;i++){
		printf("*ptr[%d]=%d, **(ptr+%d)=%d\n",i,*ptr[i],i,**(ptr+i));
	}
	for(i=0;i<3;i++){
		printf("*ptr[%d]=%d, *(*(ptr+%d)+%d)=%d\n",i,*ptr[i],i,i,*(*(ptr+i)+i));
	}
	printf("&ary[0][0]=%d\n",&ary[0][0]);
	printf("&ary[0][1]=%d\n",&ary[0][1]);
	printf("&ary[1][0]=%d\n",&ary[1][0]);
	printf("&ary[1][1]=%d\n",&ary[1][1]);
	printf("&ary[2][0]=%d\n",&ary[2][0]);
	printf("&ary[2][1]=%d\n",&ary[2][1]);
	system("PAUSE");
	return 0;


}

