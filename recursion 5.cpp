//prime  number
#include<stdio.h>
int prime(int , int);
int main()
{
	int n,num;
	printf("enter the number", n,num);
	scanf("%d",&n);
	num = prime(n, n/2);
	if( num ==1)
	{
		printf("%d is prime\n",n);
	}
	else
	{
		printf("%d is composite\n", n);
	}
	return 0;
}
int prime(int n, int num)
{
	if(num == 1)
	return 1;
	else if  ( n% num == 0)
	
		return 0;
		else
		return prime(n, num-1);
	
}
