#include <iostream>
using namespace std;
int main()
{
  int a,b,result;
  cout<<"Enter values of a and b:";
  cin>>a>>b;
  result=(a+b)*(a*a-a*b+b*b);
  cout<<"(a^3+b^3)="<<result;
}
