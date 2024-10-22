/*
Problem link: https://leetcode.com/problems/valid-sudoku/description/
Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

1. Each row must contain the digits 1-9 without repetition.
2. Each column must contain the digits 1-9 without repetition.
3. Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.
Note:

A Sudoku board (partially filled) could be valid but is not necessarily solvable.
Only the filled cells need to be validated according to the mentioned rules.
*/
class Solution {
public:

    bool isValidRow(vector<vector<char>>& board, int i){
        int cols = board[0].size();
        unordered_map<char, int> myMap;
        for(int j = 0; j < cols; ++j){
            char curr_val = board[i][j];
            if(curr_val != '.'){
                myMap[curr_val]++;
                if(myMap[curr_val] > 1){
                    return false;
                }
            }
        }
        return true;
    }

    bool isValidColumn(vector<vector<char>>& board, int j){
        int rows = board.size();
        unordered_map<char, int> myMap;
        for(int i = 0; i < rows; ++i){
            char curr_val = board[i][j];
            if(curr_val != '.'){
                myMap[curr_val]++;
                if(myMap[curr_val] > 1){
                    return false;
                }
            }
        }
        return true;
    }

    bool isValidBox(vector<vector<char>> &board, int startRow, int startCol){
        unordered_map<char, int> myMap;
        for(int i = 0; i < 3; ++i){
            for(int j = 0; j < 3; ++j){
                char curr_val = board[startRow + i][startCol + j];
                if(curr_val != '.'){
                    myMap[curr_val]++;
                    if(myMap[curr_val] > 1){
                        return false;
                    }
                }
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        //check for duplicates in each row
        //check for duplicates in each column
        //check for duplicates in each sub box of 3*3

        //check for duplicates in each row
        int rows = board.size(), cols = board[0].size();
        for(int i = 0; i < rows; ++i){
            if(!isValidRow(board, i) || !isValidColumn(board, i)){
                return false;
            }
        }

        //check for each 3*3 square board
        for(int i = 0; i < rows; i += 3){
            for(int j = 0; j < cols; j += 3){
                if(!isValidBox(board, i , j)){
                    return false;
                }
            }
        }
        return true;
    }
};