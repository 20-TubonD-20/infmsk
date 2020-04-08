#include <iostream>

using namespace std;

void loop(int N, int r, int k)
{
	cin >> N;
	string F16, F4;
	F4="0000";
	F16="0123456789ABCDEF";
	
	for(k=3; k>=0; k--)
	{
		r=N%16;
		F4[k]=F16[r];
		N=(N-r)/16;
	}
	cout << F4;
	
}

int main()
{
	int N, r, k;	
	string F16[r];
	string F4[k];	
	loop(N,r,k);
}
