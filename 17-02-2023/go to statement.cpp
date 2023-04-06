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
        goto  label_name;
      }
      else
      {
          cout<<i<<" " ;
      }

   }
     label_name : cout<<"wasim ";

    return 0;

}

