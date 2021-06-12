/*ch3 width3.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	double f1=2.5e5;
	
	printf("|%15f|\n",f1);
	printf("|%-15.0f|\n",f1);
	printf("|%-#15.0f|\n",f1);
	
	printf("|%-15.4f|\n",f1);
	printf("|%-15.4e|\n",f1);
	system("PAUSE");
	return 0;


}

