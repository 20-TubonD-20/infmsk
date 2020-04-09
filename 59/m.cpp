#include <iostream>

using namespace std;

void loop(int N, int r, int k, int B)
{
	cin >> N >> B;
	string F16, F4;
	F4="0";
	F16="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	if(N<0)
	{
	cout << "-";
	N=N*(-1);
	}
	
	for(k=0; k>=-1; k++)
	{
		

		if(N<B)
		{
			F4[k]=F16[N];
			break;
			
		}
		r=N%B;
		F4[k]=F16[r];
		N=(N-r)/B;
	}
	
	for(k; k>=0; k--)
	{
		cout << F4[k];
	}	
	
}

int main()
{
	int N, r, k, B;	
	string F16[r];
	string F4[k];	
	loop(N,r,k,B);
}
