#include<stdio.h>

int a[10][10], n, visited[10], se;



void DFS(int e){
    visited[e] = 1;
    printf("%d\n", e);
    for(int j=0; j<n; j++){
        if((a[e][j] !=0) && visited[j] == 0){
            DFS(j);
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
    printf("Enter the starting element : ");
    scanf("%d", &se);
    DFS(se);
}

