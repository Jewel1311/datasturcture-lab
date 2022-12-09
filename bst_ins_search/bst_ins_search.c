#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left, *right;
};

struct node *newnode, *root=NULL, *temp, *parentptr;

void insertion(){
    int data;
    printf("Enter the data : ");
    scanf("%d",&data);
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    if(root == NULL){
        root = newnode;
    }
    else{
        temp = root;
        while(temp != NULL){
            parentptr = temp;

            if (data < temp->data){
                temp = temp->left;
            }
            else{
                temp = temp->right;
            }
        }
        if(data < parentptr->data ){
            parentptr->left = newnode;
        }
        else{
            parentptr->right = newnode;
        }
        
    }
}

void deletion(){

}

void search(){

}

void traversal(struct node *t){
    if(t == NULL){
        return;
    }
    traversal(t->left);
    printf("%d\n",t->data);
    traversal(t->right);
}

void main(){
    int c;
    while(1){
        printf("\n---------------------\n");
        printf("\n1.Insertion\n2.Deletion\n3.Search\n4.Traversal\n5.Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d",&c);
        switch(c){
            case 1: insertion();
                    break;
            case 2: deletion();
                    break;
            case 3: search();
                    break;
            case 4: traversal(root);
                    break;
            case 5: exit(0);
                    break;

            default: 
                    printf("Invalid choice");
        }
    }
}