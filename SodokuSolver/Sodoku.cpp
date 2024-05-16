//
//  Sodoku.cpp
//  SodokuSolver
//
//  Created by Alex Estrada on 5/16/24.
//

#include "Sodoku.hpp"
using namespace std;

Sodoku::Sodoku(){
    for (int i = 0 ; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            board[i][j] = nullptr; // Initialize to some default value
        }
    }
}
Sodoku::~Sodoku(){
    // Delete dynamically allocated memory
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (board[i][j] != nullptr) {
                delete board[i][j];
            }
        }
    }
}

void Sodoku::printBoard(){
    for (int i = 0 ; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(j == 0){
                cout << "| ";
            }
            
            if(board[i][j] != nullptr){
                cout << " " << *board[i][j] << "  |  ";
            }
            else{
                cout << "    |  ";
            }
            
        }
        cout << " " << endl << "-----------------------------------------------------------------" << endl;
        
    }
}

void Sodoku::updateBoard(int value, int row, int col){
    row -= 1;
    col -= 1;
    if (value == 0){
        board[row][col] = nullptr; // Delete existing value if any
    }
    else{
        if(board[row][col] != nullptr){
            delete board[row][col]; // Delete existing value if any
        }
        board[row][col] = new int(value);
    }
}



