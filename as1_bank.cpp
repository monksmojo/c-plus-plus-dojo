#include<iostream>
using namespace std;
#define sar 4.3
#define fdr 6.9
void calculatesar();
void calculatefdr();
int main()
{
  int c;
  cout<<"WELCOME SIR \n";
  cout<<"press 1). to know your saving account balance after current financial year\n";
  cout<<"press 2). to know your fixed deposit balance after current financial year\n";
  cout<<"please enter your choice \n";
  cin>>c;
  switch (c) {
    case 1:
    cout<<"your saving acount balance before financial year is = 2,00,000\n";
    calculatesar();
    break;

    case 2:
    cout<<"your fixed deposit amount before financial year is = 3,00,000\n";
    calculatefdr();
    break;
  }
  return 0 ;
}
 void calculatesar()
{
  float si ;
  float amount;
  float sab=200000 ;
  si = ( sab*sar*1)/100;
  amount=sab+si;
  cout<<"after calculating intrest \n";
  cout << "your intrest is =\t"<<si<<'\n';
  cout << "your saving account balance is=\t" <<amount<< '\n';
}

void calculatefdr()
{
 float si ;
 float amount;
 float fdb=300000 ;
 si = ( fdb*sar*1)/100;
 amount=fdb+si;
 cout<<"after calculating intrest \n";
 cout << "your intrest is =\t"<<si<<'\n';
 cout << "your fixed amount balance is=\t" <<amount<< '\n';
}
