#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "Sodoku.hpp"
using namespace std;


int main() {
    // this is the board that I will use for testing and the backtracking algorithm.
    int testBoard[9][9] ={
        {8,0,2,0,0,6,0,5,0},
        {0,4,0,0,1,8,0,0,0},
        {0,9,0,0,0,3,0,8,4},
        {2,0,0,0,0,9,8,0,1},
        {0,1,0,0,0,0,5,4,9},
        {0,8,0,0,3,0,6,0,0},
        {0,7,8,9,0,2,4,0,5},
        {0,2,9,0,0,5,7,0,3},
        {5,0,1,0,7,0,9,0,8}
    };
    
    Sodoku sodoku(testBoard);


    string choice = "";
    cout << "Hello! This is my sodoku Solver. Enter your puzzle and this will solve it for you!" << endl
    << "Enter what ineger you would like to enter in the board. Do this by " << "entering it in interger + Row + colum " << endl
    << "Ex: 123 would make 1 go into the 2nd row and third column" << "or type the row and colum d to delete an option" << endl
    << "Ex: d12 to delete the number in row 1 column 2" << endl
    << "type n to submit and I will solve it for you"<< endl;
    
    sodoku.printBoard();

    while(choice != "n"){
        
        cin >> choice;
        
        if (choice == "n") {
            std::cout << "Cancelled." << std::endl;
            break; // Exit the loop if 'n' is entered
        }
        
        int number, row, column;
        int choices[3];
        for (int i= 0; i < choice.length(); i++) {
            if(choice.at(i) == 'd'){
                choices[i] = 0;
            }
            else{
                choices[i] = choice.at(i) - '0';
            }
        }
        number = choices[0];
        row = choices[1];
        column = choices[2];
        
        sodoku.updateBoard(number, row, column);
        sodoku.printBoard();
    }
    return 0;
}
