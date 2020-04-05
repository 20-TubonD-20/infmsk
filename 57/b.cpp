#include <iostream>
#include <algorithm>
using namespace std;
int a, b, c, d, e, f;
int main()
{
	cin >> a >> b >> c >> d >> e;
//	f=min(a,b,c,d,e);
	f=min(a,b);
	f=min(f,c);
	f=min(f,d);
	f=min(f,e);
	cout << f << endl;
	f=max(a,b);
	f=max(f,c);
	f=max(f,d);
	f=max(f,e);
	cout << f << endl;			
}
