#include <iostream>
using namespace std;
int a, b, c;
int main()
{
	cin >> a >> b >> c;
	if (a<=b && a<=c)
		cout << a << endl;
	else
		if (b<=a && b<=c)
		cout << b << endl;
		else
			if (c<=b && c<=a)
			   cout << c << endl;
			   
	if (a>=b && a>=c)
		cout << a;
	else
		if (b>=a && b>=c)
		cout << b;
		else
			if (c>=b && c>=a)
			   cout << c;
			
}
