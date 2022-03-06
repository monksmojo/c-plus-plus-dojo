#include"iostream"
#include<conio.h>
#define size 5
using namespace std;

class stack
{
	int *a;
	int top;
public:
	stack()
	{
	  top=-1;
	  a=new int[size];
    }
	int isFull()
	{
	if(top==size-1)
	   return 1;
	else
		return 0;
	}
	int isEmpty()
	{
	if(top==-1)
		return 1;
	else
		return 0;
    }
	void push(int value)
	{
		cout<<"Value inserted in Stack :"<<value<<"\n";
	if(this->isFull())
		cout<<"Stack is Full\n";
	else
		a[++top]=value;
    }
	void pop()
	{
		cout<<"\nValue deleted from Stack :";
	if(this->isEmpty())
	  cout<<"Stack is Empty\n";
	else
	{
		cout<<a[top--];
		cout<<endl;
	}
    }
	void display()
	{
		cout<<"\nStack : ";
		for(int i=top;i>=0;i--)
			cout<<a[i]<<"\t";
	}
};
int main()
{
	stack s;
	s.push(6);
	s.push(3);
	s.push(4);
	s.display();
	s.pop();
	s.display();
	getch();
	return 0;
}
