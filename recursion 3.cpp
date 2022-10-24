//decimal number to binary number
#include<stdio.h>
int binary(int);
int main()
{
	int n, b;
	printf("enter the number ");
	scanf("%d", &n);
	binary(n);
	return 0;
}
int binary(int n)
{
	if(n==0 )
	
			return 0;
	

	if(n==1) {
	    printf("1");
	    return 1;
    }       
	
	 else
	 {
	    binary(n/2);
	 	printf("%d",n%2);

	 }
}
