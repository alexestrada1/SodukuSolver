//
//  Sodoku.hpp
//  SodokuSolver
//
//  Created by Alex Estrada on 5/16/24.
//

#ifndef Sodoku_hpp
#define Sodoku_hpp

#include <stdio.h>
#include <iostream>
class Sodoku{
private:
    int board[9][9] = {};
public:
    Sodoku();
    Sodoku(int inBoard[9][9]);
    ~Sodoku();

    void printBoard();
    void updateBoard(int value, int row, int col);
    void solve(int board[9][9]);
};

#endif /* Sodoku_hpp */
