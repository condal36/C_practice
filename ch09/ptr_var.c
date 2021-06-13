/*ch9 ptr_var.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int num=10;
	int *ptr_num;
	printf("num=%d &num=%p\n",num,&num);
	ptr_num=&num;
	printf("*ptr_num=%d ptr_num=%p &ptr_num=%p\n",
			*ptr_num,ptr_num,&ptr_num);
	system("PAUSE");
	return 0;


}

