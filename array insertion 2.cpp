#include<stdio.h>


int main()
{
	
	int  a[50],size,i, num, pos;
 printf("enter the size of array");
scanf("%d", &size);
printf("enter elements of array");
for (i=0; i<size; i++)
{
	scanf("%d", &a[i]);
}
printf("elements in array are");


{

		for(i=0; i<size; i++)
		printf("%d", a[i]);
		printf("\n");
			}
			
			
			
///insertion
printf("enter data you want to insert");
scanf("%d", &num);
printf("enter position");
scanf("%d", &pos);

//insertion at mid
for(i=size-1;i>=pos-1;i--)
{
	a[i+1]=a[i];
}

a[pos-1]=num;
size++;
  printf("array after insertion");
  printf("\n");
	  for(i=0;i<size;i++){
	  
	   printf("%d",a[i]);
}
//enter at the begining

  for(i= size -1; i =0; i++)
{
	a[i+1]=a[i];
	
}
a[0]= num;
size++;
//enter at the end
a[i] = num;


 
}

			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			

