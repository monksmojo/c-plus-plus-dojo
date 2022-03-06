#include<iostream>
#include<string.h>
#include <stdio.h>
using namespace std;
char array[50];
void insert();
void upper();
void show();
int main()
{
  cout << "welcome to the program \n to convert a  string into upper case" << '\n';
  insert();
  upper();
  show();

}
void insert()
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


void upper()
{
  int i;
  std::cout << "before conversion" << '\n';
  puts(array);
  for(i=0;array[i]!='\0';i++)
  {
    array[i]=toupper(array[i]);
  }
}

void show()
{
  cout << "after conversion" << '\n';
  puts(array);

}
