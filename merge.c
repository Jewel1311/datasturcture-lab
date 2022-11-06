#include<stdio.h>
void main(){
	int a[20],b[20],c[40],d[40],i,k,m,n,x;
	
	printf("Enter size of first array : ");
	scanf("%d",&m);
	printf("Enter elements of first array : ");
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	printf("\n");
	
	printf("Enter size of array second array : ");
	scanf("%d",&n);
	printf("Enter elements of second array : ");
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	printf("\n");

	x=m+n;
	
	for(i=0;i<m;i++){
		c[i]=a[i];
	}
	for(i=0;i<n;i++){
		c[m+i]=b[i];
	}
	
	printf("Merged array is");
	for(i=0;i<x;i++){
		printf("%d ",c[i]);
	}
	printf("\n");
	

	
	for(i=0,k=0;i<m;i++,k+=2){
		d[k]=a[i];
	}
	for(i=0,k=1;i<n;i++,k+=2){
		d[k]=b[i];
	}
		
	
	printf(" Sort merged array is ");
	for(i=0;i<x;i++){
		printf("%d ",d[i]);
	}
	printf("\n\n");	
}
	
