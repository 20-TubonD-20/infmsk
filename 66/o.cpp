#include <iostream>

using namespace std;


int main(){
	string	input,
			ras;
	cin >> input >> ras;
	for(int i = input.size()-1; i > 0; i--){
		if(input[i] == '.'){
			input = input.substr(0, i);
			break;
		}
	}
	input = input + "." + ras;
	cout << input;
}
