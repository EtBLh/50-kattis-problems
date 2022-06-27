#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    int factors = 0, num = 0;
    cin >> num;
    for(int k = 2; k < sqrt(1000000001)+1; k++) {
    	while(num % k == 0){
    		factors++;
    		num /= k;
    	}
    	if(num == 1){
    		cout << factors << "\n";
    		return 0;
    	}
    }
    cout << factors + 1 << "\n";
    return 0;
}

