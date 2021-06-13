/*ch8 ins_sort.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int ary[21];
	int i,j;
	int tmp;
	ary[0]=-1;
	for(i=1;i<=20;i++){
		ary[i]=rand()%100+1;
	}
	printf("\nSource Array ...\n");
	for(i=1;i<=20;i++){
		printf("%5d",ary[i]);
		if(!(i%5)){
			printf("\n");
		}
	}
	//Insert sorting
	for(i=2;i<=20;i++){
		tmp=ary[i];
		for(j=i;ary[j-1]>=tmp;j--){
			ary[j]=ary[j-1];
		}
		ary[j]=tmp;
	}
	//After
	printf("\nSorted Array ...\n");
	for(i=1;i<=20;i++){
		printf("%5d",ary[i]);
		if(!(i%5)){
			printf("\n");
		}
	}
	system("PAUSE");
	return 0;


}

