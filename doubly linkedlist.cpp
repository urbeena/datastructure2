#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
		struct node  *prev;
};
struct node* head,*tail;

void insertStart()
{
struct node*temp;
int item;

temp = (struct node*)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&temp->data);




if(head==NULL){
	
	
temp->next = NULL;
temp->prev = NULL;
temp->data= item;
head = temp;
}
else

{
	temp->data = item ;
	temp->prev=NULL;
	temp->next=head;
	head->prev = temp;
	head= temp;
	
}

	


}
void display()
{
    struct node* trav, *temp;
    
    while (temp!= NULL) {
    	printf("\nIn Forward Direction\n");
        printf(" %d ", temp->data);
        trav = temp;
        temp = temp->next;
    }
}
    
    int main()
{
   
 	int ch;
	while(1)
	{
		printf("enter 1 for create 2 for view ,  3 for  exit");
		scanf("%d", &ch);
		if(ch==1) insertStart();
		if(ch==2) display();
		if(ch==3) 
		break;
}
    
   
    
    return 0;
}
