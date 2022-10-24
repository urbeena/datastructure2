#include<iostream>
using namespace std;
#define MAX 100;
int main()
{
	int a[100] ={ 0};
	int pos,i, item, element , n = 10;
	// initial size of array
	for(i=0; i<10;i++)
	a[i] = i+1;
	
	///print orginal array
	for(i = 0; i< n; i++)
	cout<<a[i];
	cout<<endl;

	
	//item to be inserted
	item = 10;
	 // index after which element is to be inserted
	 pos = 5;
	 //increase size by 1
	  n++;
	  
	  //for shift
	  for( i =n-1; i> pos-1; i--)
	  
	  a[i+1] = a[i];
	  
	  // insert item
	  a[pos-1] = item;
	  
	  //print the updated array
	  for(i =0; i<n; i++)
	  cout<<    a[i]<<"";
	  cout<<endl;
	  return 0;
	
}

