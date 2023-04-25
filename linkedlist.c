//Anusha Singh, PRN - 21070123019
#include <stdio.h>
#include <stdlib.h>

struct node 
{ 
int data;
struct node*next;
};
 int main()
 {
 	struct node*newnode1 =(struct node*)malloc(sizeof(struct node));
 	struct node*newnode2= (struct node*)malloc(sizeof(struct node));
 	newnode1->data=6;
 	newnode1->next=newnode2;
 	newnode2->data=9;
 	newnode2->next=NULL;
 	printf("data=%d,addr=%d",newnode1->data,newnode1->next);
 	printf("data=%d,addr=%d",newnode2->data,newnode2->next);
 }
