#include <iostream>

using namespace std;

int a, b, summ=0;

int main()
{
	cin >> a >> b;
	while(a*a<=b*b){
		summ=a*a+summ;
		a++;}
	cout << summ;
}
