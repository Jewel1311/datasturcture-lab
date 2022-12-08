#include <stdio.h>

int main() {
    int a[10],b[10],i,n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the array elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2 == 0){
            b[i] = 1;
        }
        else{
            b[i] = 0;
        }
    }
    printf("\nBit string for even numbers\n");
    printf("---------------------------");
    printf("\nArray \n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\nBitstring \n");
    for(i=0;i<n;i++){
        printf("%d\t",b[i]);
    }
}