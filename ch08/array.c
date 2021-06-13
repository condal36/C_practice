/*ch8 array.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int even[20];
	int odd[20];
	int sum[20];
	int i;
	for(i=0;i<20;i++){
		even[i]=2*i;
		odd[i]=2*i+1;
	}
	printf("\nArray even[0...19]");
	for(i=0;i<20;i++){
		if((i%5)==0){
			printf("\n");
		}
		printf("%5d",even[i]);
	} 
	printf("\nArray odd[0...19]");
	for(i=0;i<20;i++){
		if((i%5)==0){
			printf("\n");
		}
		printf("%5d",odd[i]);
	}
	for(i=0;i<20;i++){
		sum[i]=even[i]+odd[i];
	} 
	printf("\n\nArray sum[0...19]");
	for(i=0;i<20;i++){
		if((i%5)==0){
			printf("\n");
		}
		printf("%5d",sum[i]);
	}
	printf("\n");
	system("PAUSE");
	return 0;


}

