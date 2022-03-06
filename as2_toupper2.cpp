#include<iostream>
#include<string.h>
#include <stdio.h>
using namespace std;
void insert(char array[]);
void upper(char array[]);
void show(char array[]);
int main()
{
  char arr[50];
  cout << "welcome to the program \n to convert a  string into upper case" << '\n';
  insert(arr);
  upper(arr);
  show(arr);

  return 0;
}
void insert(char array[])
{
  char ch ;
  int i=0;
  cout << "enter the string you want to convert" << '\n';
  do {
    ch=getchar();//or we can use gets() but thats dangereous
    array[i]=ch;
    i++;
  } while(ch!='\n');

  array[i+1]='\0';
}


void upper(char array[])
{
  int i;
  for(i=0;array[i]!='\0';i++)
  {
    array[i]=toupper(array[i]);
  }
}

void show(char array[])
{
  int i;
  cout<<"after conversion\n";
  for(i=0;i<strlen(array);i++)
  {
    cout << array[i];
  }

}
