#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left, *right;
};

struct node *newnode, *temp, *root = NULL, *prev, *prev1, *inp, *child;

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

struct node* inorderpredecessor(struct node* root){
    root = root->left;
    while(root->right != NULL){
        root = root->right;
    }
    return root;
}


struct node* delete(struct node* root, int n){
    if(root == NULL){
        return NULL;
    }
    if( root->left == NULL && root->right == NULL){
        free(root);
        return NULL;
    }

    if(n < root->data){
        root->left = delete(root->left,n);
    }
    else if(n > root->data){
        root->right = delete(root->right,n);
    }
    else{
        if(root->left != NULL && root->right !=NULL){
            inp = inorderpredecessor(root);
            root->data = inp->data;
            root->left = delete(root->left,inp->data);
        }
        else {
            child = root->right ? root->right : root->left;
            root = child;
        }
    }
    return root;
}

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
                    delete(root, n);
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
