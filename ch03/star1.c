/*ch3 star1.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int width,precision;
	double d_num=1234.56789;
	
	printf("Source Number: %f\n\n",d_num);
	printf("Input the width : ");
	scanf("%d",&width);
	
	printf("\nInput the precision : ");
	scanf("%d",&precision);
	
	printf("\nFormat===> \"%%-%d.%df\"\n",width,precision);
	printf("Formatted Number:|%-*.*f|\n",width,precision,d_num);
	system("PAUSE");
	return 0;


}

