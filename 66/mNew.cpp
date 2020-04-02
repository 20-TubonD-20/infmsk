#include <iostream>

using namespace std;

void check(string &input, string str1, string str2, int &num){
	num = input.find(str1, num);
	if(num == -1)
		return;
	input.erase(num, str1.size());
	input.insert(num, str2);
	num = num + str2.size();
//	cout << num << endl;
}

int main(){
	string input,
		   str1,
		   str2;
		   
	getline(cin , input);
	getline(cin , str1);
	getline(cin , str2);
	
	int num = input.find(str1);
	
	while(num != -1){
		check(input, str1, str2, num);
	}

	cout << input;
}
