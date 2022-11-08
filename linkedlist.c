#include<stdio.h>
#include<stdlib.h>

void insbeg();
void inspos();
void insend();
int count();

struct node {
    int data;
    struct node *next;
};

struct node *newnode, *head=NULL;

int count(){
    struct node *temp;
    int c = 0;
    temp = head;
    while(temp != NULL){
        temp = temp->next;
        c++;
    }
    return(c);
}
void insbeg() {
    int val;
    printf("Enter the value : ");
    scanf("%d", &val);
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = head;
    head = newnode;
}

void traversal(){
    struct node *temp;
    // printf("count = %d",count());
    if(head == NULL){
        printf("Linked List empty");
    }
    else{
        temp = head;
        while(temp!= NULL){
            printf("%d\n",temp->data);
            temp = temp->next;
        }
    }
}
void insend(){
    struct node *temp;
    int val;
    if(head == NULL){
        insbeg();
    }
    else{
        printf("Enter the value : ");
        scanf("%d", &val);
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = val;
        newnode->next = NULL;
        temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
    }
}



void inspos(){
    int pos, val;
    struct node *temp;
    printf("Enter position : ");
    scanf("%d", &pos);
    if(pos == 1){
        insbeg();
    }
    else if(pos > 1 && pos <= count()){
        printf("Enter the value:");
        scanf("%d", &val);
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = val;
        temp = head;
        int i = 1;
        while(i < pos-1){
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
    else if(pos == (count()+1)){
        insend();
    }
    else{
        printf("Invalid position");
    }
    
}

void main(){
    int choice;
    while(1){
        printf("\n--------------------------------------------\n");
        printf("\n1.Insertion beg\n2.Insertion postion\n3.Insertion end\n4.Traversal\n5.Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: insbeg();
                    break;
            case 2: inspos();
                    break;
            case 3: insend();
                    break;
            case 4: traversal();
                    break;
            case 5: exit(0);
                    break;
            default: 
                    printf("Invalid Choice");
        }
    }

}