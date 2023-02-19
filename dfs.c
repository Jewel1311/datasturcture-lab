#include<stdio.h>

int s[10], a[10][10], n, visited[10], top, se;

void push(int e){
    top++;
    s[top] = e;
}
void pop(){
    int ele = s[top];
    top--;
    return ele;
} 

void DFS(int e){
    printf("%d\n", e);
    for(int j=0; j<n; j++){
        if((a[e][j] !=0) && visited[j] == 0){
            push(j);
        }
        
    }

}


void main(){
    printf("Enter the no of vertices : ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    visited[0] = 1;
    for(int i=0; i<n; i++){
        print("%d\n", i);
    }
}

