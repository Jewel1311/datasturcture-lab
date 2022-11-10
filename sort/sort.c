#include<stdio.h>

void main(){
	int a[10],n,i,j,temp;
	
	printf("Enter size of array :");
	scanf("%d", &n);
	
	printf("Enter elements of array\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("Array elements are :");
	for (i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	
	for(i=0;i<n;i++){
	for(j=i+1;j<n;j++){
		if (a[j]<a[i]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	}
	
	printf("Sorted array is \n");
	for (i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
