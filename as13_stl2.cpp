#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
  int arr[]={1,2,3,4};
  list<int> li;
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<"array of integers: is\n";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<"\t";
    li.push_back(arr[i]);
  }
  cout<<'\n';
  cout<<"no. of elements in list\n"<<n<<endl;
  cout<<"size oflist li:"<<sizeof(li)<<endl;
  list<int>::iterator it;
  cout<<"printing of list 1 using iterator \n";
  for(it=li.begin();it!=li.end();it++)
  {
    cout<< *it<<"\t";
  }
  cout<<"\n \n";
  list<int> li1(4);
  static int data=1;
  cout<<"inserting data into list 2 using iterator\n";
  for(it=li1.begin();it!=li1.end();it++)
  {
    data*=2;
    *it=data;
  }
  cout<<"printing of list 2 using iterator\n";
  for(it=li1.begin();it!=li1.end();it++)
  {
    cout<< *it<<"\t";
  }

  cout<<"\n \n";
  cout<<"special list iterator  revesre function\n";
  list<int>::reverse_iterator ti;
  cout<<"reversing the elements of list 1\n";
  for(ti=li.rbegin();ti!=li.rend();ti++)
  {
    cout<<*ti<<"\t";
  }

  return 0;
}
