//stack usign linked list


//time complixity is of the order of  o(1)
//newnode contain the addres of previous node
#include<stdio.h>
#include<malloc.h>
void push();
void view();
void pop();
struct node{
	int data; 
	struct node*next;
	int top==-1;
	
};
struct node*top = NULL;
int main()
{
	int ch, item;
	while(1)
	{
		printf(" 1 for push 2 for view  3 for pop 4  for exit");
		scanf("%d", &ch);
		if( ch==1)
		{
			printf("enter item to push");
			scanf("%d", &item);
			push();
		}
	
	else if(ch==2)
	{
		
		if(top == -1){
		
		
		printf("underflow");}
		
		else
		printf("%d", item)
		
	}

	
	 pop();
	
	
	else if(ch==3) break;
}
	
	
		
	
}
void push(int item) ///time complexity o(n)
{
	struct node*temp;
	temp = (struct node*)malloc(sizeof(struct node));
	
	temp->data = item;
	
	
		temp->next = top;
		top= temp;
	
	
}
void view()
{
	struct node*trav;
	trav = top;
	if(top ==NULL)
	{
	printf("stack is empty")
	
	}
	else
	while(trav!=NULL)
	{
		printf("%d",trav->data);
		trav = trav->next;
	}
	
	
	
}
void pop()
{
	struct node*temp;
	temp=top;
	if (top == NULL)
	printf("stack underlow");
	else
	{
		
		top = top->next;
		free(temp);
		
	}
}
























