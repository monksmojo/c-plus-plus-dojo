#include<iostream>
using namespace std;
#include<cstring>
#include<string.h>
class student
{
private:
  int rollno;
  char *name;
  int *marks;
public:
  student()
  {
    cout<<"inside defualt constructor\n";
    rollno=0;
    name=new char[strlen("unknown")+1];
    strcpy(name,"unknown");
    marks=new int(-1);
    print();
    cout<<"student marks: "<<*marks<<"";
  }
  student(int r,char n[],int *m)
  {
    //int *p;
    rollno=r;
    name=new char[strlen(n)];
    strcpy(name,n);
    marks=new int[5];
    print();
    cout << "student marks: ";
    for(int i=0;i<5;i++)
    {
      *(marks+i)=*(m+i);
      cout<<*(marks+i)<<"  ";
    }


  }
  ~ student()
    {
      cout<<"\n destructor called haha\n";
      delete name;
      delete marks;

    }
  void print()
  {
    cout<<"student roll no.: "<<rollno<<endl;
    cout <<"student name :"<<name<< '\n';
  }
 };


 int main()
 {
   student s1;
   int m[]={90,80,81,93};
   s1.~ student();
   cout<<"\n\n";
   student s2(3,"jhon",m);
   s2.~ student();
   return 0;
 }
