#include <iostream>

using namespace std; 

int a, summa=0, pr=1;

int main()
{
	
	do
	{
		cin >> a;
		if(a==0)
			break;
		summa=summa+a;
		pr=pr*a;	
		
		
		
	}while(a!=0);
	
	cout << summa << " " << pr;
	
	
	
}
