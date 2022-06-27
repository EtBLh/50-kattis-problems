#include <iostream>
#include <limits.h>

using namespace std;

int abs(int num){
    if (num < 0) num = -num;
    return num;
}

int main(){
    int input = 0;
    int min = INT_MAX;
    int current = 99;
    cin >> input;
    for (int i = 0; i < 10000; i+=100){
        int num = i + 99;
        int res = abs(num - input);
        if (res <= min) {
            current = num;
            min = res;
        }
    }
    cout << current;
    return 0;
}