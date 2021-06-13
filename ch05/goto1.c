/*ch5 goto1.c*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
	int left,right,mid;
	char echo;
	printf("Choose a number(1-100) !\n");
	printf(" And I will guess it. \n");
	
	left=1;
	right=100;
	
	loop:
		if(left>right){
			printf("You cheat me!\n");
			goto quit;
		} 
		mid = (left+right)/2;
	again:
		printf("\nYour number is %d.\n",mid);
		printf("match(m),greater(g),or smaller(s) ?");
		scanf("%c",&echo);
		
		switch(echo){
			case 'M':
			case 'm':printf("I just know it!\n");
					 goto quit;
			case 'G':
			case 'g':right=mid-1;
					 goto loop;
			case 'S':
			case 's':left=mid+1;
					 goto loop;
			default: goto again; 
		}
	quit:
		getch();
	system("PAUSE");
	return 0;


}

