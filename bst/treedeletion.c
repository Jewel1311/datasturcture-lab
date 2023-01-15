#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left, *right;
};

struct node *newnode, *temp, *root = NULL, *prev, *prev1, *in;

void insert(){
    int n;

    printf("Enter the node to insert : ");
    scanf("%d", &n);
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->left = NULL;
    newnode->right = NULL;
    if(root == NULL){
        root = newnode;
    }
    else{
        temp = root;
        while(temp != NULL){
            prev = temp;
            if (n < temp->data ){
                temp = temp->left;
            }
            else{
                temp = temp->right;
            }
        }
        if (n < prev->data){
            prev->left = newnode;
            return; 
            }
        prev->right = newnode; 
    }
}

// struct node* inOrderPredecessor(struct node* rt){
//     rt = rt->left;
//     while(rt->right != NULL){
//         rt = rt->right;
//     }
//     return rt;
// }

struct node *deleteNode(struct node *root, int value){

//     struct node* iPre;
//     if (root == NULL){
//         return NULL;
//     }
//     if (root->left==NULL&&root->right==NULL){
//         free(root);
//         return NULL;
//     }

//     //searching for the node to be deleted
//     if (value < root->data){
//         root-> left = deleteNode(root->left,value);
//     }
//     else if (value > root->data){
//         root-> right = deleteNode(root->right,value);
//     }
//     //deletion strategy when the node is found
//     else{
//         iPre = inOrderPredecessor(root);
//         root->data = iPre->data;
//         root->left = deleteNode(root->left, iPre->data);
//     }
//     return root;
// }

void inorder(struct node *rt){
    if(rt == NULL)
        return;
        inorder(rt->left);
        printf("%d\n",rt->data);
        inorder(rt->right);
}

void preorder(struct node* rt){
    if(rt == NULL)
        return;
    printf("%d\n", rt->data);
    preorder(rt->left);
    preorder(rt->right);
}

void postorder(struct node* rt){
    if(rt == NULL)
        return;
    postorder(rt->left);
    postorder(rt->right);
    printf("%d\n", rt->data);
    
}

void main(){
    int c,n;
    while(1){
        printf("\n1.Insert\n2.delete\n3.inorder\n4.preorder\n5.postorder\n6.exit\n");
        printf("Enter your choice : ");
        scanf("%d",&c);
        switch(c){
            case 1: insert();
                    break;
            case 2:  printf("Enter the node to delete : ");
                    scanf("%d",&n);
                    deleteNode(root, n);
                    break;
            case 3: inorder(root);
                    break; 
            case 4: preorder(root);
                    break;
            case 5: postorder(root);
                    break;
            case 6: exit(0);
                    break;
            default: printf("Invalid choice ");
        }
    }
}