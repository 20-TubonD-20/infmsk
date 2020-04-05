#include <iostream>

using namespace std;

float x, y;

int main ()
{
	cin >> x >> y;
	if (y<1){				//y=1
			cout << "1";}
	else{
		cout << "0";}
	if ((y + x) < 0){		//y=-x
		cout << "1";}
	else{
		cout << "0";}
	if ((y*y + x*x - 1) < 0){		//x^2 + y^2 = 1
		cout << "1";}
	else{
		cout << "0";}
	if ((y*y + (x-1)*(x-1) - 1) < 0){		//y^2 + (x-1)^2 = 1
		cout << "1";}
	else{
		cout << "0";}
	cin.get();	
}
