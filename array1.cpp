//deleting an element in an  array 
#include<stdio.h>

int main()
{
	int  a[100],size,i;   //size=n, i=c
	int  pos;
	printf("enter the size of array");
    scanf("%d", &size);
	printf("enter the elements");
	for(i=0; i<size; i++)
	
		scanf("%d",&a[i]);
		
 //delete an element
printf("enter the position where you want to delete\n");
	scanf("%d",&pos);
	
	
 
	 		//shifting
	for(i = pos-1; i<size -1; i++)
	
	a[i] = a[i+1];
   printf("resultant array is");

	//print the final array
	for(i=0; i<size-1; i++)
	
		printf("%d",a[i]);
		
	
	}

		
	
	
	


