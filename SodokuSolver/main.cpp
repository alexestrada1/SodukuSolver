#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

void printBoard(int* board[][9]){
    
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

int main() {
    int* board[9][9] = {};
    
    for (int i = 0 ; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            board[i][j] = nullptr; // Initialize to some default value
        }
    }
    board[1][2] = new int(1);
    board[0][0] = new int(1);
    
    printBoard(board);
    
    string choice = "";
    cout << "Enter what ineger you would like to enter in the board. Do this by"
    << "entering it in interger + Row + colum " << endl;
    cout << "Ex: 123 would make 1 go into the 2nd row and third column" << endl << "type n to cancel"<< endl;
    
    while(choice != "n"){
        cin >> choice;
        if (choice == "n") {
                  std::cout << "Cancelled." << std::endl;
                  break; // Exit the loop if 'n' is entered
              }
        
        int number, row, column;
        int choices[3];
        for (int i= 0; i < choice.length(); i++) {
            choices[i] = choice.at(i) - '0';
        }
        number = choices[0];
        row = choices[1] -1;
        column = choices[2] -1; //-1 to let them put the number in the chosen spot. Array starts at 0
        
        if(board[row][column] != nullptr){
            delete board[row][column]; // Delete existing value if any

        }
        board[row][column] = new int(number);

                printBoard(board);
              std::cout << "You entered: " << choice << std::endl;
          }
    
}
