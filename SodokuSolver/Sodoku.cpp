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
            board[i][j] = 0; // Initialize to some default value
        }
    }
}

Sodoku::Sodoku(int inBoard[9][9]) {
    // Constructor with initial board setup
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            board[i][j] = inBoard[i][j];
        }
    }
}

Sodoku::~Sodoku() {

}

void Sodoku::printBoard(){
    for (int i = 0 ; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(j == 0){
                cout << "| ";
            }
            
            if(board[i][j] != 0){
                cout << " " << board[i][j] << "  |  ";
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
        board[row][col] = 0; // Delete existing value if any
    }
    else{
        if(board[row][col] != 0){
             board[row][col] = 0; // Delete existing value if any
        }
        board[row][col] = value;
    }
}

void Sodoku::solve(int board[9][9]){
    /*
    Solver board
    Start:
    We start with the first empty cell.
    We generate a list of possible valid values that can be filled in that cell.
    We iterate over this list and start with the first value. This value is placed in the required cell.
    We move on to the next cell. We again generate a list of possibilities. However, if no list can be generated, then this means that there is something wrong with the value of the previous cell. We then move back to the previous cell and place the next value on the generated list in the cell now. We repeat this step until the current cell has a valid value placed inside it.
    We stop when we reach the 81st cell (the last cell in a Sudoku puzzle) and have placed a valid value.
    The puzzle has now been solved.
    Stop.
    */
    
}



