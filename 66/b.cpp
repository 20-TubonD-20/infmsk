#include <iostream>

using namespace std;

int main(){
	string input;
	int count = 0;
	cin >> input;
	for(int i = 0; i < input.length(); i++){
		if(input[i] == 'a'){
			input[i] = 'b';
			count++;
		}
		else if (input[i] == 'A'){
			input[i] = 'B';
			count++;
		}
	}
	cout << input << endl;
	cout << count;
}
