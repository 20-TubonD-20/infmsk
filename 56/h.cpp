#include <iostream>
#include <stdlib.h>
#include <time.h> 
#include <cmath>
using namespace std;
float a,b,c;
int main()
{
	srand(time(NULL));
	cin >> a >> b;
	a=int(a*pow(10,3));
	b=int(b*pow(10,3));
	int k=5;
	while(k>=0 , k--)
	{
	c=float(rand()%(int(b)-int(a)+1)+int(a))/pow(10,3);
	cout<< c << " ";
	}
	cin.get();
}
