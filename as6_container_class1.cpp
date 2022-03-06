#include <iostream>
#include<stdio.h>
using namespace std;
class point
{

	public:
	int x,y;
	void print()
	 {
		cout<<"point x: "<<x<<"\n";
    cout<<"point y: "<<y<<"\n";
	 }
};
class circle
{
	int radius;
	point center;
	public:
	void print()
	{
		cout <<"radius of circle: "<<radius<< '\n';
    cout <<"center of circle: "<<center.x<<" "<<center.y<< '\n';
	}
};

int main()
{
	cout << "calling of system default constructor of component & container class" << '\n';
	cout <<"printing of garbage value\n";
  circle c1;
	c1.print();
	return 0;
}
