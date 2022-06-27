#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char str1[1000];
	char str2[1000];
	cin >> str1 >> str2;
	if (strlen(str1) < strlen(str2)){
		cout << "no";
	}
	else{
		cout << "go";
	}
	return 0;
}