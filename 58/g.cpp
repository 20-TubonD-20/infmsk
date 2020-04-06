#include <iostream>

using namespace std;

int a, b, c, d, k, i, s;

int main()
{
	s=0;
	cin >> a >> b >> c >> d; 
	for(i=1; i<=10000; i++){
		k=a*i+b;
	if(k>9999 && k<=99999 && k%a==b && k%c==d){
		cout << k << " ";
		s=1;}}	
	if (s==0){
		cout << "-1";}
			
		
	cin.get();
	
}
