#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int num = 0, total_time = 0;
    bool completed[1000] = {0};
    int wrong[1000] = {0};

    while (true){
        cin >> num;
        if (num == -1) break;

        char problem = 0;
        char status[6] = {0};
        cin >> problem >> status;
        problem -= 65;
        if (!strcmp(status,"right") && !completed[problem]){
            completed[problem] = true;
            total_time += num;
        }
        if (!strcmp(status, "wrong")){
            wrong[problem]++;
        }
    }
    int solved = 0;
    for (int i = 0; i < 1000; i++){
        if (completed[i]){
            total_time+=20*wrong[i];
            solved++;
        }
    }
    cout << solved << " " << total_time;
    return 0;
}