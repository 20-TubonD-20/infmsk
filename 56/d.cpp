#include <iostream>
using namespace std;
int a, b, c, k;
int main()
{
	cin >> k;
	a=k/100;
	b=(k%100)/10;
	c=k%10 ;
	cout << a << " " << b << " " << c;
}
