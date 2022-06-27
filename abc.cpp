#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int num;
	vector<int> nums;
	for (int i = 0; i < 3; i++){
		cin >> num;
		nums.push_back(num);
	}
	sort(nums.begin(), nums.end());
	char display[4] = {0};
	cin >> display;
	for (int i = 0; i < 3; i++){
        switch(display[i]){
            case 'A':
                cout << nums[0] << " ";
                break;
            case 'B':
                cout << nums[1] << " ";
                break;
            case 'C':
                cout << nums[2] << " ";
                break;
        }
    }
	return 0;
}