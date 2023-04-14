#include<iostream>

using namespace std;

main()

{
	int i,n;
	
	cout<<"enter the size of string :";
	cin>>n;
	cout<<"enter the string:";
	
	char s[n];
	for(i=0;i<n;i++)
	{
		cin>>s[i];
	}
	cout<<"the string in togglecase is :";
	for(i=0;i<n;i++)
	{
		if(s[i]>=97 && s[i]<=122)
		{
			s[i]-=32;
		 } 
		 else
		 {
		 	s[i]+=32;
		 }
		 cout<<s[i];
	}
}
