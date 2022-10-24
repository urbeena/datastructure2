//find raise to power
#include<stdio.h>
int pow(int,int);
int main()
{int a,b,p;
	printf("enter a and b");
	scanf("%d %d",&a,&b);
	p = pow(a,b);
	printf("%d", p);
	
	
}
int pow(int a, int b)
{
	int ans;
	if(b==1)
	return a;
	else
	{
		ans = a*(pow(a,b-1));
		return ans;
	}
}
