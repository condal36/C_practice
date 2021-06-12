/*ch4 practice.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int i=2,j=3;
	double k;
	k=2/3;
	printf("2/3 = %f\n",k);
	k=2/3.;
	printf("2/3. = %f\n",k);
	int x=2,y=4,z=8;
	int a,b,c,d;
	a=(x+y)*(x-z)/x;
	b=x-(y-z)*z+x;
	c=y/z+(--x);
	d=z-x+y*x;
	printf("x=%d y=%d z=%d\n",x,y,z);
	printf("a=%d b=%d c=%d d=%d\n",a,b,c,d);
	char c1,c2;
	int diff;
	c1='z',c2='a';
	diff=c1=c2;
	printf("c1-c2=%d\n",diff);
	i=100;
	int total=0;
	
	total=++i+1;
	printf("total = %d, i=%d\n",total,i);
	total=0;
	total=i+++1;
	printf("total = %d, i=%d\n",total,i);
	
	
	unsigned char ac=100,bc=50;
	printf("%d &%d = %d\n",ac,bc,ac&bc);
	printf("%d |%d = %d\n",ac,bc,ac|bc);	
	printf("%d ^%d = %d\n",ac,bc,ac^bc);
	printf("~%d = %d\n",ac,~ac);
	printf("%d>>2=%d\n",ac,ac>>2);
	printf("%d<<2= %d\n",ac,ac<<2);
	system("PAUSE");
	return 0;


}

