#include<iostream>
#include<list>
#include<vector>
#include<deque>
#include<algorithm>
#include "conio.h"
using namespace std;
int main()
{
  int i;
  while(1)
  {
    cout<<endl;
    cout<<"1. vector operation\n";
    cout<<"2. list operation\n";
    cout<<"3. deque operation\n";
    cout<<"4. more list operation\n";
    cout<<"5. exit\n";
    cin>>i;
    switch(i)
    {
      case 1:
      {
        cout<<"vector operation\n";
        cout<<"swap of two vector \n";
        cout<<"traverse using pop_back() \n";
        double arr[]={10.1,10.2,10.3,10.4,10.5};
        int n=sizeof(arr)/sizeof(arr[0]);
        vector<double> v1(arr,arr+n);
        cout<<"size of vector v1 is:"<<v1.size()<<endl;
        cout<<"elements of vector v1 is:"<<endl;
        for(int i=0;i<n;i++)
        {
          cout<<v1[i]<<"\t";
        }
        cout<<endl;
        vector<double> v2(n);
        cout<<"swap(),pop_back(),push_back(),back(),size() stl vector function"<<endl;
        v1.swap(v2);
        cout<<"size of vector v2 is:"<<v2.size()<<endl;
        cout<<"elements of vector v1 is:"<<endl;
        while(!v2.empty())
        {
          cout<<v2.back()<<"\t";
          v2.pop_back();
        }
        cout<<endl;
        cout<<endl;
      }
      break;


      case 2:
      {
        cout<<"list operation\n";
        cout<<"push_front(),front(),pop_front(),size() stl list functions\n";
        int a[]={10,20,30,40,50};
        int n=sizeof(a)/sizeof(a[0]);
        list<int> li;
        for(int i=0;i<n;i++)
        {
          li.push_front(a[i]);
        }
        cout<<"size of list li is:"<<li.size()<<endl;
        while(!li.empty())
        {
          cout<<li.front()<<"\t";
          li.pop_front();
        }
        cout<<endl;
      }
      break;


      case 3:
      {
        cout<<"deque operation\n";
        cout<<"pop_back(),push_back(),back(),push_front(),front(),pop_front(),size(),empty stl list functions\n";
        deque <int> de;
	      de.push_back(30);
	      de.push_back(40);
	      de.push_back(50);
	      de.push_front(20);
	      de.push_front(10);
        int q=de.size();
	      cout<<"Size of dequeue :"<<q<<endl;
	       for(int i=0; i<q; i++)
         {
           cout<<de[i]<<"\t";
           cout<<endl;
         }
	      de[2]=33;
	      while(!de.empty())
        {
          cout<<de.front()<<"\t";
          de.pop_front();
        }
        cout<<endl;
      }
      break;
      case 4:
      {
        cout<<"more list operation\n";
        cout<<"reverse(),merge(),unique() stl list functions\n";
        int a[]={10,20,30,40,50};
        int n=sizeof(a)/sizeof(a[0]);
        list<int> li;
        for(int i=0;i<n;i++)
        {
          li.push_front(a[i]);
        }
        cout<<"before merging \n";
        cout<<"size of list li is:"<<li.size()<<endl;
        list<int> l1;
        l1.push_front(35);
	      l1.push_front(30);
	      l1.push_front(25);
	      l1.push_front(20);
	      l1.push_front(15);
        l1.reverse();
        li.merge(l1);
        li.unique();
        while(!li.empty())
        {
          cout<<li.front()<<"\t";
          li.pop_front();
        }
        cout<<"\n";
        cout<<"before merging \n";
        cout<<"size of list li is:"<<li.size()<<endl;
      }
      break;
      case 5:
      {
        exit(0);
      }
    }
  }
  return 0;
}
