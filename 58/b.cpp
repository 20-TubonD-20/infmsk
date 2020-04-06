#include <iostream>

using namespace std;

int main()
{
	long a,s;
	s=0;
	cin >> a;
		while (a>0){
		s=a+s;
		a-=1;}
	cout << s;
	cin.get();
}
