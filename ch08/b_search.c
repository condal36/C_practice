/*ch8 b_search.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int ary[21]={-1,23,21,2,34,45,67,44,667,86,33,25,66,8,15,89,99,100,105,29,48};
	int i,j;
	int tmp,key;
	int left,right,mid;
	
	for(i=2;i<=20;i++){
		tmp=ary[i];
		for(j=i;ary[j-1]>=tmp;j--){
			ary[j]=ary[j-1];
		} 
		ary[j]=tmp;
	}
	printf("\nSorted Array ...\n");
	for(i=1;i<=20;i++){
		printf("%5d",ary[i]);
		if(!(i%5)){
			printf("\n");
		}
	}
	printf("\nNumber Searching : ");
	while(scanf("%d",&key)==1){
		left=1;
		right=20;
		while(left<=right){
			mid=(left+right)/2;
			if(key==ary[mid]){
				break;
			}
			if(key<ary[mid]){
				right=mid-1;
			}
			else{
				left=mid+1;
			}
		}
		if(ary[mid]==key){
			printf("Finding %d in Rank %d.\n",key,mid);
		}
		else{
			printf("Sorry, not found !\n");
		}
		printf("\nNumber Searching : ");
	}
	system("PAUSE");
	return 0;


}

