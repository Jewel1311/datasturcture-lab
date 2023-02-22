#include<stdio.h>

int a[10][10], visited[10],n, min, edges=1, mincost=0;

void main(){
    printf("Enter the number of vertices : ");
    scanf("%d", &n);
    printf("Enter the adjacent matrix :  ");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }

    visited[0] = 1;
    while(edges < n){
        min=999;
        int x=0,y=0;
        for(int i=0;i<n;i++){
            if(visited[i] == 1){
                for(int j=0; j<n; j++){
                    if(!visited[j] && a[i][j]!=0){
                        if(a[i][j]< min){
                            min = a[i][j];
                            x = i;
                            y = j;
                        }
                    }
                }
            }
        }

    visited[y] = 1;
    mincost += min;
    printf("Edge %d : (%d, %d)\n",edges, x, y);
    edges++;
    }

    printf("Mincost = %d", mincost);
    
}
