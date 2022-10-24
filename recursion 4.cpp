	#include<stdio.h>
	int fib(int);
	int  main()
	{
		int n;
		printf("enter  size");
		scanf("%d",&n);
		int term=fib(n);
		printf("%d",n, term);
	}
	int fib(int i)
	{
		
		if( i==1 || i == 2){
				printf("1");
		return 1;
		}
	
		else{
				return fib(i-1) + fib(i-2);
		}
		
		
		
		
	}
	
