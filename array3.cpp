#include<iostream>
using namespace std;
void arr_scan(int [], int);
int arr_sum(int[], int);
int main() // function execution always starts in  main function
{
	int a[20], n;
	int s;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	arr_scan(a,n);
	s = arr_sum( a,n);
	cout<<"the sum is"<<s;
	
	
	
}
void arr_scan(int b[], int s)
{
	int i;
	cout<<"enter the elements :N"<<endl;
	for(i=0 ; i<s;i++)
	{
		
		cin>>b[i];
	}
}
int arr_sum(int b[],int s)
{int i, sum ;
	for(i=0; i<s; i++)
	{
		sum = sum + b[i];
	}
	return sum;
}









