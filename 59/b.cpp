#include <iostream>

using namespace std;

int N,k,i;

void ZVEZDAAAAA ()
{
	cin >> N;
	for(k=N; k>=1 ; k--)
		{
			i=N;
			for(i=N; i>=1;i--)
			{
				cout << "*";
			}
			cout << endl;
		}
}

int main()
{
	ZVEZDAAAAA();
	cin.get();
}
