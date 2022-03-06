#include<iostream>
#include<conio.h>
using namespace std;
int main() {
  int myfav[5]={10,20,30,40};
  char happy[10]={'H','A','P','P','Y'};
  for(int i=0;i<=3;i++)
  {
    std::cout << myfav[i] << '\n';
  }

  std::cout << "first way of printing character array" << '\n';
  std::cout << happy << '\n';

  std::cout << "second way of printing character array" << '\n';
  for (int j = 0; happy[j]!='\0'; j++)
  {
    std::cout << j <<'\t'<<happy[j]<< '\n';
  }

  std::cout << "string operation" << '\n';
  string fname,lname,name;
  std::cout << "enter your first name" << '\n';
  cin>>fname;
  std::cout << "no. of chracters in first name\t\n"<<fname.size() << '\n';

  std::cout << "enter your second name\n" << '\n';
  cin>>lname;
  std::cout << "no. of chracters in last name\t\n"<<lname.size() << '\n';


  int a=fname.compare(lname);

  if ( a==0)
  {
    std::cout << "no. of charcters are  equal\n" << '\n';
  } else {
    std::cout << "no. of character are not equal\n" << '\n';
  }


    if ( fname==lname)
    {
      std::cout << "first name and last name are equal\n" << '\n';
    }
    else
    {
      std::cout << "first name and last name are not equal\n" << '\n';   }


  name=fname+lname;
  std::cout << "your full name IS \t" <<name<< '\n';

  std::cout << name.append("\t\tkilled by code")<<"\t\tha ha ha ha\t\t\n"<< '\n';

  return 0;









}
