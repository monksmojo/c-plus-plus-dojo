#include<iostream>
using namespace std;
#include<string.h>


class person
 {
 protected:
    char *pname;
    int age;
 public:
     person(char name[],int a)
     {
         pname=new char[strlen(name)+1];
         strcpy(pname,name);
         age=a;
     }
     void print()
     {
         cout<<"name: "<<pname<<endl;
         cout<<"age: "<<age<<endl;
     }
 };

class teacher :  virtual public person
{
protected:
    char *tcourse;
public:
    teacher(char name[], int a,char course[]):person(name,a)
    {
         tcourse=new char[strlen(course)+1];
         strcpy(tcourse,course);
    }
    void print()
    {
        cout<<"teaches: "<<tcourse<<endl;
    }
};



class student: virtual public person
{
protected:
    char *ssubject;
public:
    student(char name[], int a,char subject[]):person(name,a)
    {
        ssubject= new char[strlen(subject)+1];
        strcpy(ssubject,subject);
    }

    void print()
    {
        cout<<"studies:"<<ssubject<<endl;
    }
};

class phd: public teacher, public student
{
private:
    char *spec;
public:
    phd(char name[], int a,char course[],char subject[],char speca[])
    :person(name,a),teacher(name,a,course),student(name,a,subject)
    {
        spec=new char[strlen(speca)+1];
        strcpy(spec,speca);
    }

    void print()
    {
        person::print();
        teacher::print();
        student::print();
        cout<<"specalization:"<<spec;

    }

} ;

int main()
{
    phd p1("udit",23,"cooking","cutting","data science");
    p1.print();
    return 0;
}
