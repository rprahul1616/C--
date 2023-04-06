#include<iostream>
using namespace std;
int main()
{
       cout<<"enter a number"<<endl;
    int n;
    cin>> n;

      if(n==1)
    {
        cout<<n<<" is sunday";
    }
     else if(n==2)
    {
        cout<<n<<" is monday";
    }
     else if(n==3)
    {
        cout<<n<<" is tuesday";
    }
     else if(n==4)
    {
        cout<<n<<" is wednesday";
    }
     else if(n==5)
    {
        cout<<n<<" is thusday";
    }
      else if(n==6)
    {
        cout<<n<<" is friday";
    }
      else if(n==7)
    {
        cout<<n<<" is saturday";
    }
      else
    {
        cout<<n<<" is invalid day";
    }

    return 0;
}
