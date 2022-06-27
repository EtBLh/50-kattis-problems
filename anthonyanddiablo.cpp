#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long double a = 0.0, n = 0.0, temp = 0.0;
    cin >> a >> n;
    temp = (n / M_PI) / 2;
    if (temp * temp * M_PI > a){
        cout << "Diablo is happy!\n";
    } else {
        cout << "Need more materials!\n";
    }
    return 0;
}