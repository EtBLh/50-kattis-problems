//https://open.kattis.com/problems/2048
//9084694
//2048

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> swipe(vector<int> v) {

    // Get only non-zero elements
    vector<int> v2;
    for(int i = 0; i < 4; i++) {
        if(v[i] != 0) {
            v2.push_back(v[i]);
        }
    }

    // Add 0 to the end so that the last element won't double
    v2.push_back(0);

    // Merge together, left is merged, right is zero
    for(int i = 0; i < v2.size(); i++) {
        if(v2[i] == v2[i+1]) {
            v2[i] *= 2;
            v2[i+1] = 0;
        }
    }

    // Slide left
    vector<int> v3;
    for(int i = 0; i < v2.size(); i++) {
        if(v2[i] != 0) {
            v3.push_back(v2[i]);
        }
    }

    // Fill with zeroes
    int blanks = 4 - v3.size();
    for(int i = 0; i < blanks; i++) {
        v3.push_back(0);
    }

    return v3;
}

vector<vector<int>> top(vector<vector<int>> board){
    for(int i = 0; i < 4; i++) {
        vector<int> v;
        v.resize(4);
        v[0] = board[0][i];
        v[1] = board[1][i];
        v[2] = board[2][i];
        v[3] = board[3][i];
        v = swipe(v);
        board[0][i] = v[0];
        board[1][i] = v[1];
        board[2][i] = v[2];
        board[3][i] = v[3];
    }
    return board;
}

vector<vector<int>> left(vector<vector<int>> board){
    for(int i = 0; i < 4; i++) {
        board[i] = swipe(board[i]);
    }
    return board;
}

vector<vector<int>> right(vector<vector<int>> board){
    for(int i = 0; i < 4; i++) {
        reverse(board[i].begin(), board[i].end());
        board[i] = swipe(board[i]);
        reverse(board[i].begin(), board[i].end());
    }
    return board;
}

vector<vector<int>> bot(vector<vector<int>> board){
    for(int i = 0; i < 4; i++) {
        vector<int> v;
        v.resize(4);
        v[3] = board[0][i];
        v[2] = board[1][i];
        v[1] = board[2][i];
        v[0] = board[3][i];
        v = swipe(v);
        board[0][i] = v[3];
        board[1][i] = v[2];
        board[2][i] = v[1];
        board[3][i] = v[0];
    }
    return board;
}

int main() {

    vector<vector<int>> board;
    int dir = 0;

    board.resize(4);
    for (int i = 0; i < 4; i++){
        board[i].resize(4);
    }

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> board[i][j];
        }
    }

    cin >> dir;

    switch (dir) {
        case 0:
            board = left(board);
            break;
        case 1:
            board = top(board);
            break;
        case 2:
            board = right(board);
            break;
        case 3:
            board = bot(board);
            break;
    }

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}