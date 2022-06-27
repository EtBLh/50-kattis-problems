#include <cstring>
#include <iostream>
using namespace std;

int main(){
	const char* translation[26] = {"@","8","(","|)","3","#","6","[-]",
	"|","_|","|<","1","[]\\/[]","[]\\[]","0","|D","(,)","|Z","$","']['",
	"|_|","\\/","\\/\\/","}{","`/","2"};
	char output[10000] = {0}, input[10000] = {0};
    cin.getline(input, 10000);
	for (int i = 0; i < strlen(input); i++){
		input[i] = tolower(input[i]);
		if (isalpha(input[i])){
			cout << translation[input[i]-'a'];
		}
		else{
			cout << input[i];
		}
	}
	cout << output;
	return 0;
}