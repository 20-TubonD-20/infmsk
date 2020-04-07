#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int count=0, a, b, k,s,ost,A=0;
	cin >> a >> b;
	for(a=a; a<=b; a++)
		{
			k=a;
			while(k>0)
			{
				count++;
				k=k/10;
				
			}
			k=a;
			while(k>0)
			{
				if(k%10!=0)
				{
					ost=k%10;
					s=s+int(pow(ost,float(count)));
				}
				else s=s;
				k=k/10;
					
			}
			if(s==a)
				{
				cout << a << " ";
				A=1;
				}
			count=0;
			s=0;
			
		}
	if(A!=1)
		cout << "-1";
	
}
