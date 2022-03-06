#include<iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;
class employee
{
private:
    char *ename;
    int eno;

public:
    employee()
    {
        cout<<"default constructor\n";
        ename=new char[strlen("newbie")+1];
        strcpy(ename,"newbie");
        eno=0;
        eprint();
    }
    employee(char name[10],int eid)
    {
        cout<<"parameterized constructor\n";
        ename=new char[strlen(name)+1];
        strcpy(ename,name);
        eno=eid;
        eprint();
    }
    employee(const employee &e1)
    {
        cout<<"copy constructor\n";
        ename=new char[strlen(e1.ename)+1];
        strcpy(ename,e1.ename);
        eno=e1.eno;
        eprint();
    }
    void eprint()
    {
        cout<<"employee name:"<<ename<<endl;
        cout<<"employee id:"<<eno<<endl;
    }
};

class manager:public employee
{
private:
    int dno;
public:
    manager():employee()
    {
        dno=0;
        mprint();
    }
    manager(char name[],int eid,int did):employee(name,eid)
    {
        dno=did;
        mprint();
    }
    manager(const manager &m1):employee(m1)
    {
        dno=m1.dno;
        mprint();
    }
    void mprint()
    {
        cout<<"department id:"<<dno<<endl;
    }
};
int main()
{
    manager m;
    manager m0("udit",39,10);
    manager m2=m0;
    return 0;
}
