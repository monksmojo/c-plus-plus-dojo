#include<iostream>
#include<string.h>
#include <stdio.h>
using namespace std;
void upper(char *a);
int main()
{
  char arr[50];
  cout << "welcome to tthe program \n to convert a  string into upper case" << '\n';
  cout<<"enter the string you want to convert\n";
  cin.getline(arr,50,'\n');
  upper(arr);

  return 0;
}


void upper(char *a)
{
  int i;

  for(i=0;*(a+i)!='\0';i++)
  {
    *(a+i)=toupper(*(a+i));
  }
  cout << "after conversion of string" << '\n';
  for(i=0;*(a+i);i++)
  {
    cout << *(a+i);
  }

}
