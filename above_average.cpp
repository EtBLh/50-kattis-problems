#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main(){
	int classes = 0;
	cin >> classes;
	
	cout << fixed << setprecision(3);
	for (int i = 0; i < classes; i++){
        vector<int> scores;
        int students = 0, total = 0, above_avg = 0;
		cin >> students;
		for (int j = 0; j < students; j++){
            int score = 0;
			cin >> score;
			scores.push_back(score);
			total += score;
		}

		double avg = (double)total / students;

		for (int j = 0; j < students; j++){
			if (scores[j] > avg){
				above_avg += 1;
			}
		}
		cout << (double)above_avg / students * 100 << "%" << endl;
	}

	return 0;
}