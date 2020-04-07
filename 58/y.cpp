#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
	int a,k,count=0;;
	cin >> a;
	k=a;
	while(k>0)
	{
		count++;
		k/=10;
	}
	count--;
	k=a;
	for(count; count>=0; count--)
	{
		cout << " " << k/int(pow(10,count));
		k=k%int(pow(10,count));	
	}
