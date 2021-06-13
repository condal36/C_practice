/*ch9 ary_sym.c*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void list(int size,int *array);
void add_20(int size,int *array);
void minus_1(int size,int *array);
void plus_1(int size,int *array);
int sum(int size,int *array);
int main(){
	int array[SIZE]={1,2,3,4,5,6,7,8,9,10};
	printf("\nThe source array: ");
	list(SIZE, array);
	add_20(SIZE, array);
	printf("\nAfter adding 20 : ");
	list(SIZE, array);
	minus_1(SIZE, array);
	printf("\nThen minus 1 : ");
	list(SIZE, array);
	plus_1(SIZE, array);
	printf("\nThen plus 1 : ");
	list(SIZE, array);
	printf("\nSum of the elements : %5d \n",sum(SIZE,array));
	system("PAUSE");
	return 0;
}
void list(int size,int ary1[]){
	int i;
	printf("\n ");
	for(i=0;i<size;i++){
		printf("%5d",ary1[i]);
		if(((i+1)%5)==0){
			printf("\n");
		}
	}
}
void add_20(int size,int *ary2){
	int i;
	for(i=0;i<size;i++){
		*(ary2+i)+=20;
	}
}
void minus_1(int size,int *ary3){
	int i;
	for(i=0;i<size;i++){
		--(*ary3++);
	}
}
void plus_1(int size,int *ary3){
	int i;
	for(i=0;i<size;i++){
		++(*ary3++);
	}
}
int sum(int size,int *ary4){
	int i,total=0;
	for(i=0;i<size;i++){
		total+=ary4[i]; 
	}
	return(total);
}


