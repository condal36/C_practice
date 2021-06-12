/*ch4 op4s.c*/
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main(){
	int r1,r2;
	double area1,area2;
	double total,diff;
	printf("Calculate areas of circles ... \n\n");
	printf("Input radius of first circle : ");
	scanf("%d",&r1);
	area1=PI*r1*r1;
	printf("\n ===> The area of first circle is %.2f\n\n",area1);
	
	printf("Input radius of second circle : ");
	scanf("%d",&r2);
	area2=PI*r2*r2;
	printf("\n ===> The area of second circle is %.2f\n\n",area2);
	
	total = area1+area2;
	diff=area1-area2;
	printf("Total area is %.2f\n",total);
	printf("Difference is %.2f\n",diff);
	system("PAUSE");
	return 0;


}

