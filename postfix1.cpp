#include<stdio.h>
#define MAX 100
int isop(char);
int evaluate(int,int,char);
void push(int x);
int pop();
int stack[MAX];
int top = -1;
char ex[100] = "235*+";
int main()
{
	int a,b,r;
    int	i = 0;
	while(ex[i] !='\0')
	{
		if(! isop(ex[i]))
		{
			push(ex[i]-48);
		}
		else
		{
			a = pop();
			b = pop();
			r = evaluate(a,b,ex[i]);
			push(r);
		} i++;
	}
	printf("result = %d", pop());
	
		
	
}



int isop(char x)
{
	if(x =='+' || x=='-' || x== '/' ||x=='*')
	{
		return 1;
	}
	else
	{
	return 0;
	}
}
int evaluate(int a, int b, char opr)
{
	if(opr =='+')
	return b+a;
	
	else if (opr =='-')
	return b-a;
	
	else if(opr =='/')
	return b/a;
	
   else if(opr =='*')
	return b*a;
}
void push(int x)
{
	if(top>MAX)
	{
		printf("overflow");
	}
	else{
		stack[++top]=x;
	}
}
int pop(){
	if(top<0){
		printf("underflow");
	}
	else{
		return stack[top--];
	}
	
}

