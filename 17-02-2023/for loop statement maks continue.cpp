#include<iostream>
using namespace std;
int main()
{
     cout<<"\nenter number of subject: "<<endl;
   int n;
   cin>> n;
   int i;
    int s=0;
   for( i=1; i<=n; i=i+1)
   {
       cout<<"\nEnter  Subject "<<i<<" marks: " ;

      int a;
     cin>> a;
     if(a>0)
     {
         s = s+a;


     }
     else
     {

         continue;
     }
   }
     cout<<"Result: "<<s;


    return 0;

}

