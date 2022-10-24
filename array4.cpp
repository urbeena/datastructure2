//multiplication of array ussing functions
#include<iostream>
using namespace std;
void scan_arr( int [], int);
int mult_arr(int [], int);
int main()
{
	int a[10], n;
	int mult;
	 
	cout<<"enter array size"<<endl;
	cin>>n;
	scan_arr(a,n);
	mult = mult_arr(a,n);
	cout<<"the multiplication is    :"<<mult;
}
void scan_arr(int a[],int s)
{
	int i;
	cout<<"enter the elements"<<endl;
	for(i=0; i<s;i++)
	{
		cin>>a[i];
	}
}
int mult_arr(int a[], int s)
{
	int i, fact = 1;
	for (i=0; i<s;i++)
	{
		fact = fact*a[i];
	}
	return fact;
}










