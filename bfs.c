#include<stdio.h>

int a[10][10], visited[10],n, q[10],rear=0,front=0;

void BFS(int e){
    
    for(int i=0; i<n; i++){
        if((a[e][i]==1) && (visited[i]==0)){
            visited[i] = 1;
            q[rear]=i;
            rear++;
        }
    }
    //to check if value in queue exist
    if(front <= rear){
        printf("%d\n", e);
        int popped = q[front];
        front++;
        BFS(popped);
    }
}

void main(){
    printf("Enter the no of elements :");
    scanf("%d",&n);
    printf("Enter the adjacency matrix : ");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    visited[0] = 1 ;
    BFS(0);
}