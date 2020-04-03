#include <iostream> 
#include <iomanip>
using namespace std; 
float a;
int main()
{
	cin >> a;
	cout << fixed << setprecision(3) << 3.1415926536*a*a << endl;
	cout << fixed << setprecision(3) << 2*3.1415926536*a;
	cin.get();
}
