#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a,b,k=1,i=0;
	cin >> a >> b;
	for(a=a; a<=b; a++)
	{
		for(int i=2; i<a; i++)
		{
			if(a%i==0 && i%10!=0)
			{
				k=0;
				break;
			}
		}
			if(k==1)
				{
				cout << " " << a;
				i=1;
				}
			
			k=1;
		
		
	}
	if(i==0)
	cout << "0";
	
}
