#include <iomanip>
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	long long cwhite = 0;
	long long cupper = 0;
	long long clower = 0;
	long long csymbol = 0;

	char str[100000] = {0};

	cin >> str;
	for (long long i = 0; i < strlen(str); i++){
		char temp = str[i];
		if (temp == '_')
			cwhite++;
		else if (temp >= 'A' && temp <= 'Z')
			cupper++;
		else if (temp >= 'a' && temp <= 'z')
			clower++;
		else
			csymbol++;
	}

    long long len = strlen(str);
    double res[] = {
        (double)cwhite / len,
        (double)clower / len,
        (double)cupper / len,
        (double)csymbol / len
    };
	cout << setprecision(10);
    for (long long i = 0; i < 4; i++){
        cout << res[i] << endl;
    }
	return 0;
}