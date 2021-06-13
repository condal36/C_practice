/*classic.c*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 5
void addfront(int size,int *array);
//void addafter(int size,int *array);
int main(){
	int a[MAX]={1,2,3,4,5};
	addfront(MAX,a);

//	addafter(MAX,a);
	system("PAUSE");
	return 0;
}
void addfront(int size,int *a){
	int i;
	for(i=0;i<size;i++){
		printf("%d",*(a++));
	}
}
/*void addafter(int size,int *a){
	int i;
	for(i=0;i<size;i++){
		printf("%d",*(a++));
	}
}*/
