#include<iostream>
using namespace std;
#include <algorithm>
#include <bits/stdc++.h>
void my_fun(int a)
{
  cout<<"element:"<<a*10<<endl;
}
int my_fun1(int a)
{
  return (a*100) ;
}
int main()
{
  int arr[5]={10,11,22,11,40};
  int *p;
  int n= sizeof(arr)/sizeof(arr[0]);
  cout<<"first array\n";
  for(int i=0; i<n; i++)
  {
    cout<<*(arr+i)<<"\t";
  }
  cout<<endl;
  cout<<endl;
  cout<<"find() stl function \n";
  p=find(arr,arr+n,22);
  cout<<"element 22 found at:"<<(p)-(arr)<<endl;
  cout<<endl;
  cout<<"count() stl function \n";
  cout<<"no. of times 11 apear in array:"<<count(arr,arr+n,11)<<endl;
  cout<<endl;
  cout<<"for_each() stl function // access each element of array for some operation pass each element to defined function \n";
  for_each(arr,arr+n,my_fun);
  cout<<endl;
  cout<<"transform() stl function // access each element of array for some operation pass each element to defined function store modified value on new array\n";
  int arr1[n];
  std::transform(arr,arr+n,arr1,my_fun1);
  cout<<"second array after transform stl function \n";
  for(int i=0; i<n; i++)
  {
    cout<<*(arr1+i)<<"\t";
  }
  cout<<endl;
  cout<<"sort() & merge() stl function"<<endl;
  int arr2[2*n];
  sort(arr,arr+n);
  sort(arr1,arr1+n);
  merge(arr,arr+n,arr1,arr1+n,arr2);
  cout<<endl;
  for(int i=0; i<n; i++)
  {
    cout<<*(arr2+i)<<endl;
  }

}
