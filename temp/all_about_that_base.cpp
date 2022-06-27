#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <ctype.h>
#include <queue>
#include <map>
#include <set>

using namespace std;

int valueConverter(char num){
	if(num >= 'a' && num <= 'z'){
		return num - 'a' + 10;
	}
	else if(num == '0'){
		return 2;
	}
	else{
		return num - '0';
	}
}

int main(){
    int i;

    int cases;
    cin >> cases;

    for(i = 0; i < cases; i++){
    	string num1Str, num2Str, answerStr;
    	char op, garb;
    	cin >> num1Str >> op >> num2Str >> garb >> answerStr;
    	bool foundOne = false;
    	int minBase = 1;

    	for(auto subChar : num1Str){
    		minBase = max(minBase, valueConverter(subChar));
    	}
    	for(auto subChar : num2Str){
    		minBase = max(minBase, valueConverter(subChar));
    	}
    	for(auto subChar : answerStr){
    		minBase = max(minBase, valueConverter(subChar));
    	}

    	for(int j = minBase; j <= 36; j++){
    		try{
    			int num1; 
    			int num2;
    			int answer;
    			if(j == 1){
					num1 = num1Str.size();
	    			num2 = num2Str.size();
	    			answer = answerStr.size();
    			}
    			else{
		    		num1 = stoi(num1Str, nullptr, j);
		    		num2 = stoi(num2Str, nullptr, j);
		    		answer = stoi(answerStr, nullptr, j);
		    	}
	    		bool valid = false;
	    		switch(op){
	    			case '+':
	    				valid = num1 + num2 == answer;
	    				break;
	    			case '-':
	    				valid = num1 - num2 == answer;
	    				break;
	    			case '*':
	    				valid = num1 * num2 == answer;
	    				break;
	    			case '/':
	    				int temp = num1 / num2;
	    				temp *= num2;
	    				//check that the numbers cleanly divide, and then blindly integer divide
	    				valid = temp == num1 && num1 / num2 == answer;
	    				break;
	    		}
	    		if(valid)
	    		{
	    			foundOne = true;
		    		if(j >= 10 && j != 36){
		    			cout << char('a'+j-10);
		    		}
		    		else if(j == 36){
		    			cout << 0;
		    		}
		    		else{
		    			cout << j;
	    			}
    			}
    		}
    		catch(exception& e){

    		}
    	}
    	if(!foundOne){
    		cout << "invalid";
    	}
    	cout << "\n";
    }
    return 0;
}
