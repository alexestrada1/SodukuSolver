#include <iostream>
#include <vector>

using namespace std;



int main() {
    int* board[9][9] = {};
    
    for (int i = 0 ; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            board[i][j] = nullptr; // Initialize to some default value
        }
    }
    
    board[1][2] = new int(1);
    board[0][0] = new int(1);
    
    
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
