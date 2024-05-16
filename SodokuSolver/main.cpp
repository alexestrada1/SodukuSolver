#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "Sodoku.hpp"
using namespace std;


int main() {
    Sodoku sodoku;
    sodoku.updateBoard(1, 1, 1);
    sodoku.printBoard();

    string choice = "";
    cout << "Enter what ineger you would like to enter in the board. Do this by "
    << "entering it in interger + Row + colum " << endl;
    cout << "Ex: 123 would make 1 go into the 2nd row and third column" << endl << "or type the row and colum d to delete an option" << endl;
    cout << "Ex: d12 to delete the number in row 1 column 2" << endl <<"type n to cancel"<< endl;
    
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
