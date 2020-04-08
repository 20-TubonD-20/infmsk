#include <iostream>

using namespace std;

void setup(int N){
	for(N=N; N>0; N--)
		cout << "-";
}

int main(){
	int N;
	cin >> N;
	setup(N);
	return 0;
		
}
