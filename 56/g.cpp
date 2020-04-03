#include <iostream>
#include <stdlib.h>
#include <time.h> 
using namespace std;
int a,b;
int main()
{
	srand(time(NULL));
	cin >> a >> b;
	int k=5;
	while(k>=0 , k--)
	{
	cout<<(rand()%(b-a+1)+a) << " ";
	}
	cin.get();
}
