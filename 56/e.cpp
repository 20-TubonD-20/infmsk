#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
float x_1, y_1, x_2, y_2;
int main()
{
	cin >> x_1 >> y_1;
	cin >> x_2 >> y_2;
	x_1=sqrt((x_2-x_1)*(x_2-x_1)+(y_2-y_1)*(y_2-y_1));
	cout << fixed << setprecision(3) << x_1;
	cin.get();
}
