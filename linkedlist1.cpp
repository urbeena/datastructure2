#include<iostream>
using namespace std;
void create();
void view();
struct node{
	int data;
	struct node*next;
};
struct node*head =NULL, *tail = tail;
int main()
{
	int ch;
	cout<<"enter 1 for create 2 for view 3 for exit"<<endl;
	while(1)
	{
			cout<<"enter 1 for create 2 for view 3 for exit"<<endl;
			if (ch==1) create();
			if (ch ==2) view();
			if (ch==3) break;
	}
}
void create()
{
	struct node*temp;
	int i,n;
	cout<<"enter the nodes you want to create"<<endl;
	cin>>n;
	for(i=0; i<=n; i++)
	{
		head= (struct node*)new(sizeof(struct node));
		cout<<"enter data"<<endl;
		cin>>temp->data;
		temp-> next = NULL;
	}
	if(head == NULL)
	{
		head = temp;
		tail = temp;
	}
	else 
	{
		temp->next = temp;
		tail = temp;
	}
}
	
void view()
{
	struct node*trav;
	
	trav = head;
	while(trav != NULL)
	{
		cout<<trav->data<<endl;
		trav = trav->next;
	}
}





































