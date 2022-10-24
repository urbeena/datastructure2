


#include<iostream>
using namespace std;
void push(int);
 int pop();
 void view();
#define MAX 100
int stack[100];
 int top = -1;
int main()
{
	
	int ch, item;
	while(1)
	{
	cout<<"enter 1 for push:\n 2 for pop :\n 3 for view :\n 4 for exit"<<endl;
	cin>>ch;
	
	if(ch == 1)
	{
	
	cout<<"enter the item"<<endl;
	cin>>item;
	push(item);
		
	}
 else if (ch ==2)
 
 pop();
 
 

if (ch== 3) view();
 if(ch==4)
 break;
	
}
}

// push
 void push(int item)
 {
 	
 	if( top = MAX -1)
 	cout<<"over flow"<<endl;
 	else
 	{
 		top++;
 		stack[top] = item;
	 }
 }
 // pop
 int pop()
 {
 
 	
 	if (top == -1)
 	cout<<"stack is empty: deletion is not possible"<<endl;
 	else
 	{
 		cout<<"deletion done"<<stack[top];
 		top--;
	 }
 }
 
 
 //view
 void view()
 {
 	if(top== -1)
 	cout<<"stack is empty"<<endl;
 	else
 	{
 		int i;
 		cout<<"items of stack are"<<endl;
 		for(i = 0; i<=top; i++)
 		cout<<stack[i];
	 }
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
