# Linear-Linked-List

A __Linked List__ is a linear data structure. Every linked list has two parts, the data section and the address section that holds the address of the next element in the list, which is called a node.A Linear linked list is represented by a pointer to the first node of the linked list. The first node is called the head of the linked list. If the linked list is empty, then the value of the head points to NULL. 

 ![image](https://user-images.githubusercontent.com/113619312/230978798-17c56b57-aa07-4fc3-9496-207e44429569.png)

Each node in a list consists of at least two parts: 

- A Data Item (we can store integers, strings, or any type of data).
-   Pointer (Or Reference) to the next node (connects one node to another) or An address of another node
In C, we can represent a node using structures. Below is an example of a linked list node with integer data. 

--- 

## __Syntax:__

```
// A linked list node
struct Node {
	int data;
	struct Node* next;
};
```

---

## __Code:__

```
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
```

---

## __Output__


