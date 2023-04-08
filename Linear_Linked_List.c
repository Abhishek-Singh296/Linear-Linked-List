#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct node{
	int data;
	struct node *next;
};
int main(){

	struct node *newnode1,*newnode2,*newnode3;
	
	newnode1=(struct node*)malloc(sizeof(struct node));
	newnode2=(struct node*)malloc(sizeof(struct node));
	newnode3=(struct node*)malloc(sizeof(struct node));
	
	newnode1->data=20;
	newnode1->next=newnode2;
		
	
	newnode2->data=30;
	newnode2->next=newnode3;
	
	newnode3->data=40;
	newnode3->next=NULL;
	
	printf("data1=%d\nself_address=%d\nnext_address=%d\n\n",newnode1->data,newnode1,newnode1->next);
	printf("data2=%d\nself_address=%d\nnext_address=%d\n\n",newnode2->data,newnode2,newnode2->next);
	printf("data3=%d\nself_address=%d\nnext_address=%d\n",newnode3->data,newnode3,newnode3->next);
	return 0;
}

