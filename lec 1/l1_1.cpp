#include<iostream>
using namespace std; 

main()

{
	int n,i;
	cout<<"enter the size of array :";
	cin>>n;
	
	int a[n];
	for(i=0;i<n;i++)
	{
		cout<<"enter the elements :";
		cin>>a[i];
	}
	cout<<"all even numbers are :";
	for(i=0;i<n;i++)
	{
		if(i%2!=0)
		{
			cout << a[i];
		}
	}
}
