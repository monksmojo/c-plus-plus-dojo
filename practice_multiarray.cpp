 /*ADDITION OF TWO ARRAYS*/

#include<iostream>
using namespace std;
int main() {

std::cout << "printing of multi dimentional matrix" << '\n';
int arr[2][5]={{1,2,3,5,4},{7,8,9,10,11}};
for(int i=0; i<=1; i++)
{
  for(int j=0; j<=4; j++)
  {
    std::cout << arr[i][j] << '\t';
  }
  std::cout << "\n" << '\n';
}
int arrr[5][5];
std::cout << "now enter your own matrix" << '\n';
std::cout << "enter no. of rows " << '\n';
int i;
cin>>i;
std::cout << "enter no. of columns" << '\n';
int j;
cin>>j;
for(int k=0; k<i; k++)
{
  for(int l=0; l<j; l++)
  {
    std::cout << "enter\t" <<k+1<<"th row\t"<<l+1<<"th column element\t"<< '\n';
    cin>>arrr[k][l];

  }
    std::cout << "\n" << '\n';
}

std::cout << "your mattrix" << '\n';
for(int k=0; k<i; k++)
{
  for(int l=0; l<j; l++)
  {

    cout<<arrr[k][l]<<"\t";
  }
    std::cout << "\n" << '\n';
}

cout<<"addition of two matrices\n";

int result[10][10];
for(int f=0; f<i; f++)
{
  for(int h=0; h<j; h++)
  {
    result[f][h]=arr[f][h]+arrr[f][h];
    cout<< result[f][h] << '\t';
  }
  std::cout << "\n" << '\n';
}
  return 0;
}
