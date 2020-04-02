#include <iostream>

using namespace std;

void check(string input, int i, string &sol){
	if(input[i] == '1')			sol = sol + "0001";
	else if(input[i] == '2')	sol = sol + "0010";
	else if(input[i] == '3')	sol = sol + "0011";
	else if(input[i] == '4')	sol = sol + "0100";
	else if(input[i] == '5')	sol = sol + "0101";
	else if(input[i] == '6')	sol = sol + "0110";
	else if(input[i] == '7')	sol = sol + "0111";
	else if(input[i] == '8')	sol = sol + "1000";
	else if(input[i] == '9')	sol = sol + "1001";
	else if(input[i] == 'A')	sol = sol + "1010";
	else if(input[i] == 'B')	sol = sol + "1011";
	else if(input[i] == 'C')	sol = sol + "1100";
	else if(input[i] == 'D')	sol = sol + "1101";
	else if(input[i] == 'E')	sol = sol + "1110";
	else if(input[i] == 'F')	sol = sol + "1111";
	else 						sol = sol + "0000";
}

int main(){
	string input, sol = "";       
	cin >> input;
	for(int i = 0; i < input.size(); i++){
		if(input[i] == '-'){
			sol = sol + '-';
			continue;
		}
		check(input, i, sol);
	}
	
	if(sol.find("000")!=-1 && sol.find("000") < 2)
		sol.erase(sol.find("000"), 3);		
	else if(sol.find("00")!=-1 && sol.find("00") < 2)
		sol.erase(sol.find("00"), 2);
	else if(sol.find("0")!=-1 && sol.find('0') < 2)
		sol.erase(sol.find('0'), 1);
		
	cout << sol;	
	
}
