#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *temp, *front = NULL, *rear = NULL;

void enqueue() {
	int val;
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	printf("\nEnter the element : ");
	scanf("%d", &val);
    newnode->data = val;
    newnode->next = NULL;
    if(front == NULL){
        rear = front = newnode;
    }
    else{
        rear->next = newnode;
        rear = newnode;
    }			
}
void dequeue(){
	if(front == NULL){
		printf("\nQueue is empty");
	}
	else{
        temp = front;
        printf("\n %d is deleted", temp->data);
		front = front->next;
        free(temp); 
	}
}

void traversal(){
    if(front == NULL){
        printf("\nQueue is empty");
    }
	temp = front;
    while(temp!= NULL){
        printf("\n%d",temp->data);
        temp = temp->next;
    }
}


void main(){
	int choice;
	while(1){
		printf("\n-----------------------\n");
		printf("\n1.Enqueue\n2.Dequeue\n3.Traversal\n4.Exit");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1: enqueue();
				break;
			case 2: dequeue();
				break;
			case 3: traversal();
				break;
			case 4: exit(0);
				break;
			default: printf("\nInvalid choice");
		}
	}
}