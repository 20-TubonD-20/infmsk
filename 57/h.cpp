#include <iostream>
using namespace std;
int a, day;
int main()
{
	cin >> a >> day;
	if (day<1 && a<1)
		cout << "-1";
	else if ((a==1) && (day<=31))
		cout << 365-day;	
	else if ((a==2) && (day<=28))
		cout << 365-31-day;	
	else if ((a==3) && (day<=31))
		cout << 365-31-28-day;	
	else if ((a==4) && (day<=30))
		cout << 365-31-31-28-day;	
	else if ((a==5) && (day<=31))
		cout << 365-31-31-28-30-day;	
	else if ((a==6) && (day<=30))
		cout << 365-31-31-31-28-30-day;	
	else if ((a==7) && (day<=31))
		cout << 365-31-31-31-28-30-30-day;	
	else if ((a==8) && (day<=31))
		cout << 365-31-31-31-31-28-30-30-day;		//detected
	else if ((a==9) && (day<=30))
		cout << 365-31-31-31-31-31-28-30-30-day;	
	else if ((a==10) && (day<=31))
		cout << 365-31-31-31-31-31-30-28-30-30-day;	//detected
	else if ((a==11) && (day<=30))
		cout << 365-31-31-31-31-31-31-28-30-30-30-day;	
	else if ((a==12) && (day<=31))
		cout << 365-31-31-31-31-31-31-28-30-30-30-30-day;	
	else
		cout << "-1";
	cin.get();
}
