#include <iostream> 
#include <iomanip>
#include <cmath>
using namespace std; 
float x,y;
int main()
{
	cin >> x >> y;
	cout << fixed << setprecision(3) << pow(x,y);
	cin.get();
}
