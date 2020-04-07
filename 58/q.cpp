#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a,c=0,k,i=0;
	cin >> a;
	do
	{	i+=2;
		k=pow(2,float(i));
	}while(k<=a);
	i-=2;
	while(i>0)
	{
		k=int(pow(2,float(i)));
		cout << k << " ";
		i-=2;
		c=1;
	}
	if(c==0)
		cout << "0";
}
