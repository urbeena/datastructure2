//circular linked lists
#include<stdio.h>
#include<malloc.h>
void view();
void create();
struct node
{
	int data;
	struct node*next;
};
struct node*head =NULL, *tail =NULL;
int main()
{
	int ch;
	while(1)
	{
	printf("enter 1 for create 2 for view 3  for exit\n");
	scanf("%d", &ch);
	if(ch==1) create();
	if(ch==2) view();
	if(ch==3) break;
	printf("\n");

		
	}
}


void create()
{
	int data;
	struct node*temp;
	
	
	
	
	temp = (struct node*)malloc(sizeof(struct node));
	printf("enter data\n");
	scanf("%d", &temp->data);
	temp->next = NULL;
     	if(head == NULL)
	{
		head = temp;
		tail = temp;
	}
	else
	{
	tail->next= temp;
	tail =temp;	
}
tail->next = head;


}
//display
void view()
{
	struct node*trav;
	if(head == NULL)
	printf("there is no node in list\n");
	else
	
	{
		trav = head;
		while(trav->next!= head)
		{
		printf("%d", trav->data);
		trav= trav->next;
		
	}
	
}
}




















