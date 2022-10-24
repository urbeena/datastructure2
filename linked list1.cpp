#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node*next;	
};
struct node *head = NULL, *tail=NULL;

void create ();
void view();
void deletion();
int main()
{
	int ch;
	while(1)
	{
		printf("enter 1 for create 2 for view ,  3 for inset 4 for  for exit");
		scanf("%d", &ch);
		if(ch==1) create();
		if(ch==2) view();
		if(ch==3) deletion();
		
		if(ch==4) break;
	}
		
}
void create ()
{ struct node*temp;
int i,n;
printf("enter the nodes u want to create\n");
scanf("%d", &n);
for(i=0;i<n;i++)
{
	temp = (struct node*)malloc(sizeof(struct node));
	printf("enter data");
	scanf("%d", &temp ->data);
	temp->next=NULL;
		if(head==NULL)
	{
		head = temp ;
		tail = temp;
	}
	else
	{
		tail->next = temp;
	    tail = temp;
	}
	
}
	
}
void view()
{
	struct node*trav;
	
	trav = head;
	while(trav != NULL)
	{
		printf("%d   ",trav->data);
		trav = trav->next;
	}
}
//for deletion
 void deletion()
{
	struct node*temp, *trav;
	int item;
	printf("enter the node you want to delete");
	scanf("%d",&item);
	
	 /*delte head*/
	 if(head->data = item)
	 {
	 	temp = head;
	 	head = head->next;
	 	free(temp);
	 }
	 else  if(head ==NULL)
	 	
	 {
	
	 
	 printf("list is empty");
	 
	 }
	 
	 
	 
	 
	 //delete tail
	 if(trav->next == tail)
	 {
	 	trav->next = NULL;
	 	free(temp);
	 }
	 
	 
	 
	 
	 
	
}











