#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *temp, *top = NULL;

void push() {
	int val;
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	printf("\nEnter the element : ");
	scanf("%d", &val);
	newnode->data = val;
	newnode->next = top;
	top = newnode;			
}
void pop(){
	if(top == NULL){
		printf("Underflow");
	}
	else{
		temp = top;
		top = top->next;
		printf("%d is deleted", temp->data);
		free(temp); 
	}
}

void traversal(){
	temp = top;
	while(temp != NULL){
		printf("%d\n", temp->data);
		temp = temp->next; 
	}
}


void main(){
	int choice;
	while(1){
		printf("\n-----------------------\n");
		printf("\n1.Push\n2.Pop\n3.Traversal\n4.Exit");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1: push();
				break;
			case 2: pop();
				break;
			case 3: traversal();
				break;
			case 4: exit(0);
				break;
			default: printf("\nInvalid choice");
		}
	}
}
