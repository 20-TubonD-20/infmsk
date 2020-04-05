#include <iostream>
using namespace std;
int a;
int main()
{
	cin >> a;
	if (a==2)
		cout << "28";	
	else if (a==4 || a==6 || a==9 || a==11)
		cout << "30";
	else if (a==3 || a==5 || a==7 || a==8 || a==9 || a==10 || a==1 || a==12)
		cout << "31";
	else 
		cout << "0";
	cin.get();	
}
