#include <iostream>

using namespace std;

int a,b,c=0,count=0;

int main()
{
	int a, TF=0;
	cin >> a;
	int ost1=a%10;
	a/=10;
	
	for(int i=0; a!=0; i++)
	{
		if(a%10==ost1)
			{
				TF=1;
				break;
			}
		else
		{
			ost1=a%10;
			a/=10;
		}
		
	}
	
	if(TF==1)
		cout << "YES";
	else
		cout << "NO";
}
