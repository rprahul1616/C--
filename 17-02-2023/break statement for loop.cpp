#include<iostream>
using namespace std;
int main()
{
   cout<<"\nenter a number"<<endl;
   int a;
   cin>> a;
   int i;
   for( i=1; i<=a; i=i+1)
   {
      if( i==5 )
      {
        break;
      }
      else
      {
          cout<<i<<" " ;
      }

   }

    return 0;

}
