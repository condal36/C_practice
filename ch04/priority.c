/*ch4 priority.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int x=2,y=5,z=10;
	int res1,res2;
	res1=x+y*x-z/x;
	res2=(x+y)*(x-(z/x));
	printf("res1=%d\n",res1);
	printf("res2=%d\n",res2);
	system("PAUSE");
	return 0;


}

