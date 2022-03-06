#include<iostream>
#include<string.h>
#include <stdio.h>
using namespace std;
char *upper(char *a);
int main()
{
  char arr[50];
  int i;
  cout << "welcome to tthe program \n to convert a  string into upper case" << '\n';
  cout<<"enter the string you want to convert\n";
  cin.getline(arr,50,'\n');
  char *ch=upper(arr);


  cout << "after the conversion of array" << '\n';
  for(i=0;i<strlen(arr);i++)
  {
    cout<<*(ch+i);
  }

  return 0;
}

char *upper(char *a)
{
  static char output[50];
  int i;
  for(i=0;*(a+i)!='\0';i++)
  {
    output[i]=toupper(*(a+i));
  }
  return output;
}
