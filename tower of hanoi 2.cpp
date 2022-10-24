#include<stdio.h>
void TOH(int, char , char, char);
int main()
{
	int n=4;
	TOH(n, 'a','b','c');
}
void TOH(int n, char a, char b, char c)
{
	
	if(n==1)
	
		printf("%c to %c\n", a,c);
		else
		{
		 TOH(n-1, a,c,b);
		 printf("%c to %c\n", a,c);
		 TOH(n-1,b,a,c)	;
		}
	
}
