#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int p,q,ln;
	string a[10]={"greater than 9","one","two","three","four","five","six","seven","eight","nine"};
	cin>>p;
	cin>>q;
	for(int i=p; i<=q; i++)
	{
		if(i>9)
		{
			if(i%2==0)
			{
				cout<<"even"<<endl;
			}
			else
			{
				cout<<"odd"<<endl;
			}
		}
		if(i>=1&&i<=9)
		{
			cout<<a[i]<<endl;
		}
	}	
}