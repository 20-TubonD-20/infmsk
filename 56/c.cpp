#include <iostream> 
#include <iomanip>
#include <cmath>
using namespace std; 
float a;
int main()
{
	cin >> a;
	cout << fixed << setprecision(3) << pow(a,10);
	cin.get();
}
