#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <cstring>
#include <cmath>
#include <unordered_map>

using namespace std;


int main(){
    cin.tie(0);
    cout.tie(0);

    long long conversions = 0, intermediate = 0, highest_base = 0, temp = 0;
    char base[10000] = {0}, alien_lang[10000] = {0}, convert_lang[10000] = {0};
    map<char, int> alien_conv;
    map<int, char> lang_conv;

    cin >> conversions;

    for (long long i = 0; i < conversions; i++){
        cin >> base >> alien_lang >> convert_lang;
        for (long long j = 0; j < strlen(alien_lang); j++){
            alien_conv[alien_lang[j]] = j;
        }

        for (long long j = 0; j < strlen(convert_lang); j++){
            lang_conv[j] = convert_lang[j];
        }

        intermediate = 0;
        for (long long j = strlen(base) - 1; j >= 0; j--){
            intermediate += alien_conv[base[strlen(base) - j - 1]] * pow(strlen(alien_lang), j);
        }

        highest_base = 0;
        while (pow(strlen(convert_lang), highest_base + 1) <= intermediate){
            highest_base++;
        }
        
        string converted;
        for (long long j = highest_base; j >= 0; j--){
            temp = strlen(convert_lang) - 1;
            while (intermediate - (temp * pow(strlen(convert_lang), j)) < 0 && temp != 0){
                temp--;
            }
            intermediate -= (temp * pow(strlen(convert_lang), j));
            converted += convert_lang[temp];
        }
        
        cout << "Case #" << i+1 << ": " << converted << "\n";

    }

    return 0;
}