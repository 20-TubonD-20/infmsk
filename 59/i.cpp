#include <iostream>

using namespace std;

void loop(int N, int r, int k)
{
	cin >> N;
	string F10, F2;
	F2="01";
	F10="000000000000000000000000";

	if(N<0)
		{
		cout << "-";
		N=N*(-1);
		}
	k=0;
	for(k; k>=-1; k++)
	{
		if(N==0)
		{
			break;	
		}
		if(N/2==0)
		{
			F10[k]=F2[1];
			break;
			
		}
			
		r=N%2;
		F10[k]=F2[r];
		N=(N-r)/2;
	}
	for(k; k>=0; k--)
		cout << F10[k];
	
}

int main()
{
	int N, r, k;	
	string F2[r];
	string F10[k];	
	loop(N,r,k);
}
