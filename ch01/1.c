#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int square(int);
int main()
{
	int i;
	int total;
	int square_total= 0;
	total=0;
	for(i=1;i<=MAX;i++){
		total+=i;
	}
	printf("The sum of 1+2+...+10 is %d.\n",total);
	square_total=square(total);
	printf("Its square is %d. \n",square_total);
	system("PAUSE");
	return 0;
 } 
 int square(int value)
 {
 	return (value*value);
 }
