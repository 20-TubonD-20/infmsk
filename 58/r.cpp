#include <iostream>

using namespace std;

int main()

{
	int a,b,i=0;
	
	cin >> a >> b;
	while(1!=0)
	{
		if(a==0 || b==0)
			{
				if(a!=0)
					cout << a << " " << i;
				else
					cout << b << " " << i;
				break;
			}
		else if(a>b)
		{		
			a=a-b;
		}
			else
				b=b-a;
		i=i+1;
	}
	
}
