//sum of elementts of araay
#include<iostream>
using namespace std;
int main()
{
	int a[5],i;
	int sum =0;
	cout<<" enter the elements"<<endl;
	for(i = 0; i<5; i++)
	{
		
		cin>>a[i];
		
	}
	for(i =0; i<5; i++)
	{
		sum = sum+ a[i];
	}
	 cout<<"the sum is :"<<sum;
	
}
