#include<iostream>
using namespace std;
int main()
{
       cout<<"enter a number"<<endl;
    int n;
    cin>> n;

      if(n>80)
    {
        cout<<n<<" grade is A+";

    }
     else if(n>70)
    {
        cout<<n<<" grade is A";
    }
     else if(n>60)
    {
        cout<<n<<" grade is B+";
    }
     else if(n>50)
    {
        cout<<n<<" grade is B";
    }
      else if(n>40)
    {
        cout<<n<<" grade is C";
    }
    else
    {
        cout<<n<<" grade is Fail";
    }

        return 0;
}

