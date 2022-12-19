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
    newnode = (struct node*)malloc(sizeof(struct node*));
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

void deletion(struct node* rt , int n){

    if(rt == NULL){
        return;
    }
    
    // temp = root;
    // while(temp != NULL){
    //     if(temp->data == n){
    //         printf("%d is deleted", temp->data );
    //         if(temp->data < parentptr->data){
    //             parentptr->left = NULL;
               
    //         }
    //         else{
    //             parentptr->right = NULL;
    //         }
    //         break;
    //     }
    //     else if(n < temp->data){
    //         parentptr = temp;
    //         temp = temp->left;
    //     }
    //     else{
    //         parentptr = temp;
    //         temp = temp->right;
    //     }
    // }

}

void search(){
    int n;
    printf("Enter the element to search : ");
    scanf("%d",&n);
    temp = root;
    while(temp != NULL){
        if(n == temp->data){
            printf("Element found");
            return;
        }
        else if(n < temp->data){
            temp = temp->left;
        }
        else{
            temp = temp->right;
        }
    }
    printf("Element not found");
}

// void dup_search(int data, struct node* start) {
//     temp = start;
//     while (temp != NULL) {
//         if (data < temp->data)
//             dup_search(data, temp->left);
//         else if(data > temp->data)
//             dup_search(data, temp->right);
//         else {
//             printf("Element found\n");
//             return;
//         }
//     }
//     printf("Element not found\n");
//     return;
// }

void traversal(struct node *t){
    if(t == NULL){
        return;
    }
    traversal(t->left);
    printf("%d\n",t->data);
    traversal(t->right);
}

void main(){
    int c, n;
    while(1){
        printf("\n---------------------\n");
        printf("\n1.Insertion\n2.Deletion\n3.Search\n4.Traversal\n5.Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d",&c);
        switch(c){
            case 1: insertion();
                    break;
            case 2: 
                    printf("Enter the element to be deleted : ");
                    scanf("%d", &n);
                    deletion(root, n);
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