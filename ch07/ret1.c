/*ch7 ret1.c*/
#include <stdio.h>
#include <stdlib.h>
int get_int(void);
int find_max(int,int);
int main(){
	int a,b;
	int max;
	
	a=get_int();
	b=get_int();
	
	max=find_max(a,b);
	printf("\nMAX(%d,%d) is %d.\n",a,b,max);
	system("PAUSE");
	return 0;
}

int get_int(void){
	int num;
	printf("Input a valid integer:");
	while(scanf("%d",&num)!=1){
		while(getchar()!='\n'){
			continue;
		}
		printf("Input error! Please input again : ");
	} 
	return(num);
}

int find_max(int x,int y){
	if(x>y){
		return(x);
	}
	if(y>x){
		return(y);
	}
}
