#include<iostream>
#include<map>
#include<strings.h>
using namespace std;
int main()
{
    string s,sn;
    int pn;
    string state[]={"punjab","gujrat","rajisthan","assam","chennai"};
    int popu[]={100,200,600,500,700};
    int n=sizeof(state)/sizeof(state[0]);
    int n1=sizeof(popu)/sizeof(popu[0]);
    map<string, int, less <string> > ma;
    for(int i=0; i<n; i++)
    {
        sn=state[i];
        pn=popu[i];
        ma[sn]=pn;
    }
    map<string, int, less <string> > :: iterator it;
    cout<<"searching the population of a state\n";
    cout<<"enter state name \n";
    cin>>s;
    int p=ma[s];
    cout<<"population of "<<s<<" is:"<<p<<"\n";

    return 0;
}
