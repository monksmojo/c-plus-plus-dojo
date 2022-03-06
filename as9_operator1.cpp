#include<iostream>

using namespace std;

class Intset{
int Size, *value;
public:
    Intset(){
    Size=0;
    value=NULL;
    }

    Intset(int s)
    {
        Size = s;
    value = new int[Size];
    }

    int& operator[](int index)
    {
    return value[index];
    }

    void display(){
    cout<<"\nMarks of the subjects are: ";
    for(int i=0; i<Size; i++)
    {
        cout<<*(value+i)<<"\t";
    }
    }
};

int main(void){
    cout<<"\nEnter the number of subjects";
    int subs;
    cin>>subs;
    Intset i1(subs);
    cout<<"\nEnter the marks for each subjects";
    int marks;
    for(int i=0;i<subs;i++){
            cout<<"\nEnter marks: ";
            cin>>marks;
            i1[i] = marks;
    }
    i1.display();
return 0;
}
