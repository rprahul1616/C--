#include <iostream>
using namespace std;

int sum(int x, int y, int z = 0, int w = 0)
{
	return (x + y + z + w);
}

int main()
{
    int a,b,c,d;
    a=10;
    b=20;
    c=30;
    d=40;
	cout << sum(a,b) << endl;

	cout << sum(a,b,c) << endl;

	cout << sum(a,b,c,d) << endl;
	return 0;
}
