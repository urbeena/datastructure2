#include<stdio.h>
int main()
{
	int a[50], num,pos,i;
	int size,element;
	printf("enter the size of array");
	scanf("%d", &size);
	printf("enter the elements");
	for(i=0;i<size; i++){
			scanf("%d",&a[i]);
	}
	
	printf("elements of array are");
	{
		for(i =0; i<size; i++)
		printf("%d", a[i]);
		printf("\n");
	}
	
	printf("enter the element you want insert");
	scanf("%d" ,&num);
	printf("enter position where you want to insert");
	scanf("%d", &pos);
	for(i = size-1; i>=pos -1; i--)
	{
		a[i+1]=a[i];
	}
	a[0]= num;
	size++;
	
	//print 
	for(i =0; i<size; i++)
	printf("%d", a[i]);

}
