// #include <iostream>
// #include <char>

// using namespace std;

// int main(){
//   int n;
//   cout << "Enter till which number do you want to get expression: ";
//   cin >> n;
//  char expression = "";
//  if( n % 4 == 0 || n % 4 == 3){
//    for(int i = 1; i <= n; i++){
//      if( i % 2 == 1){
//       expression +=("%d + ",i) ;
//     }
//      else{
//       expression +=("%d - ",i); 
//     }
//    }
//    expression +=("%d + ",n);
//    cout << expression;
//   }
//  else{
//   cout << "no solution";
//  }
// }
#include<bits/stdc++.h>
using namespace std;

pair<int, int> find_empty_cell(const vector<string>& board) {
    for (int i = 0; i < board.size(); ++i) {
        for (int j = 0; j < board[i].size(); ++j) {
            if (board[i][j] == ' ') return {i, j};
        }
    }
    return {-1, -1};
}

void swap(vector<string>& board, pair<int, int> pos1, pair<int, int> pos2) {
    swap(board[pos1.first][pos1.second], board[pos2.first][pos2.second]);
}

vector<string> switch_positions(const vector<string>& board) {
    int n = board.size() * board.size() / 2;
    pair<int, int> empty_cell = find_empty_cell(board);

    if (empty_cell.first < n) {
        if (board[empty_cell.first][empty_cell.second + 1] == 'F') {
            vector<string> new_board = board;
            swap(new_board, empty_cell, {empty_cell.first, empty_cell.second + 1});
            return new_board;
        } else if (empty_cell.second + 2 < n && board[empty_cell.first][empty_cell.second + 2] == 'F') {
            vector<string> new_board = board;
            swap(new_board, empty_cell, {empty_cell.first, empty_cell.second + 2});
            return new_board;
        } else {
            return {};
        }
    }
}
int main(){
    vector<string> board = {"TTT"," ","FFF"};
    auto result = switch_positions(board);
}
