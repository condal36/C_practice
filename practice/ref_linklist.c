/*ref_linklist.c*/
/*reference_code:https://lakesd6531.pixnet.net/blog/post/329288496*/ 
#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

int main(int argc, char *argv[])
{

  struct node a,b,c;
  struct node *ptr=&a; //�ŧiptr�A�ñN�L�u�V�`�Ia
  
  a.data=12;
  a.next=&b;
  b.data=30;
  b.next=&c;
  c.data=64;
  c.next=NULL;
  
  while(ptr!=NULL){
  	printf("address=%p, ",ptr); //�L�X�`�I����} 
  	printf("data=%d ",ptr->data); //�L�X�`�I����� 
  	printf("next=%p\n",ptr->next); //�L�X�U�@�Ӹ`�I��} 
  	ptr=ptr->next;  //�Nptr���V�U�@�Ӹ`�I 
  } 
  
  system("PAUSE");	 
  return 0;
}

