#include <iostream>
#include <cmath>

using namespace std;

void Ch(string a, int i, int k)
{
	cin >> a;
	i=a.length();
	i--;
	for(int k=0; k<=i; k++)
		cout << a[k] << endl;
		
}

int main()
{
	string a;
	int i,k;
	Ch(a,i,k);
	
}
