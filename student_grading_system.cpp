#include <iostream>
using namespace std;
int main()
{
 int P,C,M,Cs,Total,Average;
 cout<<"Enter Physics,Chemistry,Maths,Computer Science Marks:";
 cin>>P>>C>>M>>Cs;
 Total=P+C+M+Cs;
 Average=Total/4;
 cout<<"Total="<<Total<<endl;
 cout<<"Average="<<Average<<endl;
   if(Average>=85)
     cout<<"Outstanding";
   else if(Average>=70 && Average<85)
     cout<<"Excellent";
   else if(Average>=50 && Average<70)
     cout<<"Good";
   else if(Average>=40 && Average<50)
     cout<<"Try little harder";
   else
     cout<<"Fail";
}
 
