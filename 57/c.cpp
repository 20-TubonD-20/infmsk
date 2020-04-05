#include <iostream>
using namespace std;
int a,b,c;
int main()
{		
	cin >> a >> b >> c;
	if (c<a && b==a)
		cout << "A B";	
	else if (b<a && a==c)
		cout << "A C";
	else if (a<b && b==c)
		cout << "B C";
	else if (b<c && a==c)
		cout << "A C";	
	else if (c<b && b==a)
		cout << "A B";				
	else if (a==b && b==c)
		cout << "0";		
		
		
	if (a<c && b<c)
		cout << "C";
		else if (c<a && b<a)
			cout << "A";
				else if (c<b && a<b)
					cout << "B";
}
