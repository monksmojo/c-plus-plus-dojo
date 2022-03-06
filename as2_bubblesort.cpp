#include<iostream>
using namespace std;
void insertion(int arr[],int n);
void sort(int arr[],int n);
void output(int arr[],int n);

int main()
{
  int array[100], n;

  cout<<"Enter number of elements\n";
  cin>>n;
  insertion(array,n);
  sort(array,n);
  output(array,n);
  return 0;
}

void insertion(int arr[],int n)
{
  int i;
  cout<<"enter the elements"<<'\n'<< endl ;

  for (i = 0; i< n; i++)
  {
    cout<<"enter the :"<<i+1<<"element :";
    cin>>arr[i];

  }
}

void sort(int arr[],int n)
{
  int i,j,temp;

   for (i = 0 ; i < n ; i++)
   {
     for (j = 0 ; j < n - i - 1; j++)
     {
       if (arr[j] > arr[j+1]) /* For decreasing order use < */
       {
         temp       = arr[j];
         arr[j]   = arr[j+1];
         arr[j+1] = temp;
       }
     }
   }
}

void output(int arr[],int n)
{
  int c;

   cout<<"Sorted list in ascending order:\n";

   for ( c = 0 ; c < n ; c++ )
   {
     cout<<arr[c];
   }



}
