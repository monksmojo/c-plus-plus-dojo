#include<iostream>
using namespace std;
void  insertion(int arr[],int n)
{
  int i;
  cout<<"Enter %d integers\n"<<'\n';

  for (i = 0; i < n; i++)
  {
    std::cout << "enter the \t"<<i+1<<"   integer:";
    cin>>arr[i];
  }

}

void isort(int arr[],int n)
{
  int i,j,temp;
  for (i = 1 ; i <= n ; i++)
  {
    j = i;

    while ( j > 0 && arr[j-1] > arr[j])
    {
      temp = arr[j];
      arr[j] = arr[j-1];
      arr[j-1] = temp;

      j--;
    }
  }
}

void output(int arr[],int n)
{
  int c;
  cout<<"Sorted list in ascending order:\n";

  for (c = 0; c <n; c++)
  {
    cout<<arr[c];
  }


}

int main()
{
  int n, array[1000] ;

  cout<<"Enter number of elements\n";
  cin>>n;
  insertion(array,n);
  isort(array,n);
  output(array,n);
  return 0;
}
