#include<stdio.h>

void main(){
    int n, a[10],b[10],t;
    printf("\nEnter the size of array : ");
    scanf("%d",&n);
    printf("Enter the elements of first array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the elements of second array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }

    for(int i=0; i<n;i++){
        t = a[i];
        a[i] = b[i];
        b[i] = t;
    }


    printf("\nAfter swapping\n");
    printf("First array \n");
    for(int i=0;i<n;i++){
        printf("\t%d",a[i]);
    }
    printf("Second array \n");
    for(int i=0;i<n;i++){
        printf("\t%d",b[i]);
    }

}
