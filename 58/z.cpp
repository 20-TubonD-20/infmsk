#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int i, a=0, b;
	cin >> i;
	b=1;

	for(i=i; i>0; i--)
	{
		b=a+b;
		cout << b << " ";
		i--;
		if(i==0)
			break;
		a=a+b;
		cout << a << " ";

	}
	
}
