/*ch5 else_if.c*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	char grade;
	int score;
	printf("What's your score?");
	scanf("%d",&score);
	
	if(score>100||score<0){
		printf("It's impossible!\n"); 
	}
	else if(score>=90){
		grade = 'A';
	}
	else if(score>=80){
		grade = 'B';
	}
	else if(score>=70){
		grade = 'C';
	}
	else if(score>=60){
		grade = 'D';
	}
	else{
		printf("You are down!\n");
	}
	if(score>=60&&score<=100){
		printf("Score %d ===> %c\n",score,grade);
	}
	system("PAUSE");
	return 0;


}

