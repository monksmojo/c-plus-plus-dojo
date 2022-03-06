#include<iostream>
using namespace std;
int main()
{
	cout << "hello" << '\n';
	int i,j,n,ar[100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin >> ar[i];
	}
	for(i=n-1;i>=0;i--)
	{
		cout << "cool" << ar[i] << endl;
	}
	return 0;
}
