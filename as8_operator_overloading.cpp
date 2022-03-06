#include<iostream>
#include<cstring>
using namespace std;
class fraction
{
   private :
    int nem;
    int dem;
   public :
       fraction()
       {
           cout<<"setting of default values\n";
           nem=0;
           dem=0;
       }
       fraction(int a, int b)
       {
           cout<<"setting of values\n";
           nem=a;
           dem=b;
           fprint();
       }
       void operator ==(fraction &f)
       {
           if(nem==f.nem&&dem==f.dem)
           {
               cout<<"fractions are equal\n";
           }
           else
           {
               cout<<"fraction are not equal\n";

           }


           if(dem==f.dem)
            {
                   cout<<"they are like fraction \n";
            }
           else
            {
                   cout<<"they are unlike fraction";
            }

       }
       void operator <<(ostream &out)
       {
           out<<nem<<"/"<<dem;
       }
       void operator <(fraction &f)
       {
           float r1,r2;
           r1=nem/dem;
           r2=f.nem/f.dem;
           if(r1<r2)
           {
               cout<<nem<<"/"<<dem<<": is smaller than"<<f.nem<<"/"<<f.dem<<endl;
           }
           else
           {
               cout<<nem<<"/"<<dem<<": is greater than"<<f.nem<<"/"<<f.dem<<endl;
           }
       }

       fprint()
       {
           cout<<"="<<nem<<"/"<<dem<<endl;

       }
};
int main()
{
   cout<<"f1:";
   fraction f1(2,7);
   cout<<"f2:";
   fraction f2(2,8);
   f1==f2;
   f1<f2;
   cout<<"printing of object\n";
   f1<<cout;
   cout<<endl;
   f2<<cout;
   return 0;
}
