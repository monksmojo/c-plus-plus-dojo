#include"iostream"
#include<conio.h>
using namespace std;
class A
{
public: int a;
		A()
		{
			a=10;
		    b=6;
		    c=8;
		}
		void print()
		{
			cout<<a<<"\t"<<b<<"\t"<<c<<endl;
		}
protected: int b;
private: int c;
};
class B:public A
{
public:void bprint()
		{
			cout<<a<<"\t"<<b<<"\t"<<endl;
			//cout<<"c is not accesible \n";
	    }
};
class C:protected A
{
public:void cprint()
		{
			cout<<a<<"\t"<<b<<"\t"<<endl;
	    }
};
class D:private A
{
	public:void dprint()
		{
			cout<<a<<"\t"<<b<<"\t"<<endl;
	    }
};
int main()
{
	A a1;
	B b1;
	C c1;
	D d1;
	a1.print();
	b1.bprint();
	c1.cprint();
	d1.dprint();
    cout<<a1.a<<"\t";
	return 0;

	getch();
}
