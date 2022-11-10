#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

void push() {
	
}

void main(){
	int choice;
	while(1){
		printf("\n-----------------------\n"
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
