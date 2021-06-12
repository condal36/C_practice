/*ch3 width2.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	char str[30]="String VS Width";
	printf("|%s|\n",str);
	printf("|%20s|\n",str);
	printf("|%-20s|\n",str);
	printf("|%-20.8s|\n",str);
	printf("|%20.8s|\n",str);
	system("PAUSE");
	return 0;


}

