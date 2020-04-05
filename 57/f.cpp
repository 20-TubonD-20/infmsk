#include <iostream>
using namespace std;
int a;
int main()
{
	cin >> a;
	if (a==12 || a==1 || a==2)
		cout << "winter";	
	else if (a>=3 && a<=5)
		cout << "spring";
	else if (a>=6 && a<=8)
		cout << "summer";
	else if (a>=9 && a<=11)
		cout << "autumn";
	else 
		cout << "NO";
	cin.get();		
}
