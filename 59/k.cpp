#include <iostream>
using namespace std;
void Count(int input){
	if(!input)	return;
		else Count(input/16);
	if(input%16==10) cout << "A";
		else if(input%16==11) cout << "B";
			else if(input%16==12) cout << "C";
				else if(input%16==13) cout << "D";
					else if(input%16==14) cout << "E";
						else if(input%16==15) cout << "F";
							else cout << input%16;
}
int main(){
	int input;
	cin >> input;
	if(input<0){
	cout << "-";
	input*=-1;
	}
	Count(input);
	if(input==0) cout << "0";
	return 0;
}
