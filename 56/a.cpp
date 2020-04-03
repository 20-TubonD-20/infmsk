#include <iostream>
#include <iomanip>
using namespace std;
float a, b, c;
float srarifm;
int main()
{
	cin >> a >> b >> c;
	cout << a << "+" << b << "+" << c << "=" << a+b+c << endl;
	cout << a << "*" << b << "*" << c << "=" << a*b*c << endl;
	srarifm=float((a+b+c)/3);
	cout << fixed << setprecision(0) << "(" << a << "+" << b << "+" << c << ")/3=" << fixed << setprecision(3) << srarifm;
	cin.get(); cin.get();
	
}
