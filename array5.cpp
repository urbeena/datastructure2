
//insert element in  an array
#include<iostream>
using namespace std;
void scan_array(int[],int);
#define MAX 100

int main()
{
	int a[100],n;
	int item, element,i, pos;
	cout<<"enter the array size"<<endl;
	cin>>n;
	scan_array(a,n);
	
	cout<<"enter the element to inssert "<<endl;
	cin>>item;
      cout<<"enter the element after which you want to insert"<<endl;
      cin>>element;
      
      for(i=0; i<n; i++)  // for elements
      {
      	if(a[i]==element)
      	{
      		pos =item;
      		n++;
		  }
	  } 
	  
	  /////// shift
	  for(i= n-1; i>=pos; i--)
	  {
	  		a[i+1] = a[i];
	  }
	  
	  	
	  	//insert item at pos
	  
	 a[pos - 1] = 	item;
	 
	  
	  // print the updated array
	  cout<<"array after insertion"<<endl;
	  for(i=0;i<n;i++)
	   cout<<a[i];
	
}
void scan_array(int a[], int s)
{
	int i;
	cout<<"enter the elements"<<endl;
	for(i=0;i<s;i++)
	{
		cin>>a[i];
	}
}
