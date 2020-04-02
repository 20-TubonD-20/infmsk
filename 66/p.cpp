#include <iostream>
#include <cmath>

using namespace std;

int check(char sym){
//	cout << sym;
	if(sym == 'F')	return 15;
	else if(sym == 'E')	return 14;
	else if(sym == 'D')	return 13;
	else if(sym == 'C')	return 12;
	else if(sym == 'B')	return 11;
	else if(sym == 'A')	return 10;
	else if(sym == '9')	return 9;
	else if(sym == '8')	return 8;
	else if(sym == '7')	return 7;
	else if(sym == '6')	return 6;
	else if(sym == '5')	return 5;
	else if(sym == '4')	return 4;
	else if(sym == '3')	return 3;
	else if(sym == '2')	return 2;
	else if(sym == '1')	return 1;
	else if(sym == '0')	return 0;
	else{
		cout << endl << "ERROR CHECK" << endl;
		return 0;
	}
}

int main(){
	string input;

	cin >> input;
	
	int res = 0, count = 0;
	for(int i = input.size()-1; i > -1; i--){
		if(input[i] == '-')	break;
		res = res + check(input[i])*pow(16,count);
		count++;
	}
	if(input[0] == '-')
		res *= (-1);	
	cout << res;
}
