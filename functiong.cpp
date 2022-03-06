#include <iostream>
#include <cstdio>
using namespace std;
int func1();
int main()
{
	int ans;
	ans=func1();
	cout<<ans<<endl;
    return 0;	
}
int func1()
{
	
	int a[4];
	for(int i=0;i<=3;i++)
	{
		cin>>a[i];
	}
	int g=0;
	for(int j=0;j<=3;j++)
	{
		if(a[j]>g)
		{
			g=a[j];
		}
	}
	return g;
}