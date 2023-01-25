#include<iostream.h>

	int main()
	{
		int a,b;
		cout<<"Enter starting number:";
		cin>>a;
		cout<<"Enter end number:";
		cin>>b;

		for(int i=a;i<=b;i++)
			{
				if(i%3 == 0)
					cout<<"Foo\n";
				else if(i%2 == 0 && i%3 != 0)
					cout<<"Bar\n";
				else if(i%2 != 0 && i%3 != 0)
					cout<<"Baz\n";
			}
		return(0);
	}