#include<iostream>

using namespace std;

int main() {
  //this is a comment i can read.
  /*this is a multiplle line comment
    comment*/
    cout << "hello world\n" << endl ;
    const double PI=3.14;
    cout << "size of double"<< sizeof(PI) << '\n';
    cout << "value of pi="<< PI << endl ;

    char mygrade='A';
    std::cout << "size of char="<< sizeof(mygrade) << '\n';
    cout << "my grade in exam =" << mygrade << '\n';

    bool ishappy=true;
    std::cout << "size of boolean="<< sizeof(ishappy) << '\n';
    cout << "am i happy?" << ishappy << '\n';

    cout <<"please enter your age"<<endl;
    int myage;
    std::cout << "size of int="<< sizeof(myage) << '\n';
    cin >>myage;
    std::cout << "your age is =\t" <<myage<< '\n';

    float marks;
    std::cout << "enter your marks " << '\n';
    std::cout << "size of float="<< sizeof(marks) << '\n';
    std::cin >>marks;
    std::cout << "your marks" <<marks<< '\n';

    
   return 0;
 }
