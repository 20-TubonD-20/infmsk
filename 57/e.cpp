#include <iostream>
using namespace std;
int a, b, c;
int main()
{
	cin >> a >> b >> c;
	if (c!=b && b==a)
		cout << "2";	
	else if (b!=a && a==c)
		cout << "2";
	else if (a!=b && b==c)
		cout << "2";
	else if (b!=c && a!=c && a!=b)
		cout << "0";
	else if (b==a && a==c)
		cout << "3";
	cin.get();		
}
