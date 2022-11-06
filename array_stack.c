#include <stdio.h>
#include <stdlib.h>
int stack[50],i,j,choice=0,n,top=-1;
void push();
void pop()
void traversal();  
void main ()  
{  
    printf("Enter the max size of stack : ");
    scanf("%d", &n);
    printf("\n----------------------------------------------\n");  
    while(choice != 4)  
    {  
        printf("\nChoose one from the below options...\n");  
        printf("\n1.Push\n2.Pop\n3.traversal\n4.Exit");  
        printf("\nEnter your choice : ");        
        scanf("%d",&choice);
        switch(choice)  
        {  
            case 1:  
            {                   
		        push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                traversal();  
                break;  
            }  
            case 4:   
            {  
                exit(0);
                break;   
            }  
            default:  
            {  
               printf("\nPlease Enter a valid choice\n");
            }   
        };  
    }  
}   
      
void push ()  
{  
    int val;
    if (top == n-1 )   
        printf("\nStack Overflow!\n");   
    else   
    {  
        printf("Enter the value : ");  
        scanf("%d",&val);         
        top = top +1;   
        stack[top] = val;   
    }   
}   
      
void pop ()   
{   
   if(top == -1)   
   printf("\nStack Underflow!\n");  
   else {
    int temp = stack[top];
    top = top -1; 
    printf("%d is deleted", temp);
   }  
}   
  
  
void traversal()  
{  
    for (i=top;i>=0;i--)  
    {  
        printf("%d\n",stack[i]);  
    }  
    if(top == -1)   
    {  
        printf("\nStack is empty\n");  
    }  
}  
