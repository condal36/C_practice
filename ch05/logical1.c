/*ch5 logical1.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	printf("NOT(3>5) ===> %d\n",!(3>5));
	printf("(3>5) OR (10>6) ===> %d\n",(3>5)||(10>6));
	printf("(3>5) AND (10>6) ===> %d\n",(3>5)&&(10>6));
	printf("(3>5) AND (10>6) OR 10 ===> %d\n",(3>5)&&(10>6)||10);
	printf("(5>3) OR (10>6) AND 0 ===> %d\n",(5>3)||(10>6)&&0);
	system("PAUSE");
	return 0;


}

