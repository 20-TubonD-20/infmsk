#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a,k=0;
		cin >> a;
		cout << " ";
		for(a=a; a>0; a-- )
		{
		//	i=float(i);
			if(a%2==0)
			{
				k=int(pow(2,float(a)));
				cout << k << " ";
			}
		}
				if(k==0)
			cout << "0";
	
}
