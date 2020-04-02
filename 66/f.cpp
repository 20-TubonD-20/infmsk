#include <iostream>

using namespace std;

int main(){
	string input, bufferD = "", buffer = "";
	getline(cin, input);
//	cout << input;		//test
	for(int i = 0; i < input.size(); i++){
		if(input[i] == ' '){
			if(buffer.size() > bufferD.size()){
				bufferD = buffer;
				buffer = "";
				continue;
			}
			else{
				buffer = "";
				continue;
			}
		}
		buffer = buffer + input[i];
	}
	if(bufferD == ""){
		cout << input << endl << input.size();
	}
	else{
		cout << bufferD << endl << bufferD.size();
	}
}
