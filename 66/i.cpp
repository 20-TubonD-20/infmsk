#include <iostream>

using namespace std;

int main(){
	string input;       
	getline(cin, input);
	while(input.find(' ')!=-1)
		input.erase(input.find(' '), 1);
	
	int size = input.size() - 1;
	
	for(int i = 0; i < input.size()/2; i++){
		if(input[i] == input[size]){
			size--;
		}
		else{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;		    
}
