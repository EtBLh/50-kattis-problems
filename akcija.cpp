#include <iostream>
#include <queue>

using namespace std;

int main(){
    priority_queue<int> queue;
    int size = 0;
    
    cin >> size;

    for (int i = 0; i < size; i++){
        int num;
        cin >> num;
        queue.push(num);
    }

    int skip = 0, sum = 0;
    while (!queue.empty()){
        if (skip != 2) sum += queue.top();
        queue.pop();
        if (skip == 2){
            skip = 0;
        } else {
            skip += 1;
        }
    }
    cout << sum << endl;
    return 0;
}