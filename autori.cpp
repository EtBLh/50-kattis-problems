//https://open.kattis.com/problems/autori
//9081689
//Autori

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str1[1000] = {0};
    char str2[1000] = {0};
    int idx1 = 1, idx2 = 1;
    cin >> str1;
    str2[0] = str1[0];
    for (;idx1 < strlen(str1); idx1++){
        if (str1[idx1] == '-'){
            str2[idx2++] = str1[idx1+1];
        }
    }
    cout << str2 << endl;
    
    return 0;
}