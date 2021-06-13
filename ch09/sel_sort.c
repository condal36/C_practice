/*ch9 sel_sort.c*/
#include <stdio.h>
#include <stdlib.h>
#define N 20
void list(int *array);
void swap(int *,int *);
void selection_sort(int *);
int main(){
	int i,array[N];
	for(i=0;i<N;i++){
		array[i]=rand()%100+1;
	}
	printf("\nSource array...\n");
	list(array);
	selection_sort(array);
	printf("\nSorting...\n");
	list(array);
	system("PAUSE");
	return 0;

}
void list(int *array){
	int i;
	for(i=0;i<N;i++){
		printf("%8d",array[i]);
		if(((i+1)%5)==0){
			printf("\n");
		}
	}
	printf("\n");
}
void swap(int *i,int *j){
	int tmp;
	tmp=*i;
	*i=*j;
	*j=tmp;
}
void selection_sort(int *array){
	int i,cmp,min;
	for(i=0;i<N;i++){
		for(cmp=min=i,cmp++;cmp<N;cmp++){
			if(array[cmp]<array[min]){
				min=cmp;
			}
			swap(&array[min],&array[i]);
		}
	}
}
