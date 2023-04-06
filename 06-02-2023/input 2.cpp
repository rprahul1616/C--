#include<iostream>
using namespace std;
int main()
{
    cout<<"enter a number"<<endl;
   int x;
   cin>> x;
    cout<<"\nenter a number"<<endl;
    int y;
    cin>>y;
    int z;
    z= (x*x*x*x*x)+(10*(x*x)*(y*y*y))+(y*y*y*y*y*y*y);
    cout<<"\nX="<<x;
    cout<<"\nY="<<y;
    cout<<"\nZ=(x*x*x*x*x)+(10*(x*x)*(y*y*y))+(y*y*y*y*y*y*y)";
    cout<<"\nz="<<z;



        return 0;
}
