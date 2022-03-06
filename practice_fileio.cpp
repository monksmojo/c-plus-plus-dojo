#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  string letter;
  //insertion data into file
  string steve="a day without sunshine is like night";
  ofstream writer("stevequote.txt");

  if (!writer)
  {
    std::cout << "error opening file" << '\n';
  }

  else
  {

    writer<<steve<<endl;
    writer.close();
  }

  ofstream writer2("stevequote.txt",ios::app);

  if(!writer2)
  {
    std::cout << "error opening file" << '\n';
  }
  else
  {

    writer2<<"-written by steve martin\n";
    writer2.close();
  }

   ifstream reader("stevequote.txt");
   if(!reader)
   {
     std::cout << "error opening a file" << '\n';
   }

   else
   {
     for(int i=0; !reader.eof(); i++)
     {

       cout<<i;
     }
     std::cout << "\n" << '\n';
     reader.close();
   }





  return 0;
}
