//recurssion function
/*when a function call itself directly or indirectly is called recursion 
Q:write a recurssive function to find factorial of n?
*/


#include<iostream>
using namespace std;
int fact(int);
int main()
{
	int n,temp;
	cout<<"enter n"<<endl;
	cin>>n;
	temp=fact(n);
	cout<<"the factorial is"<<temp<<endl;
}

int fact(int y)
{
	int temp,n;
	if (y==0)
	return 1;
	
	else
	{
		temp = n*fact(n-1);
		return temp;
	}
}

