#include<iostream>

using namespace std;

/* Initialised and Declared a 2D array of 3*3 */

char board[3][3] = {{'-','-','-'},{'-','-','-'},{'-','-','-'}};

/* Function to Dsplay board */
void printboard(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<< board[i][j] <<" ";
            if(j<2){
                cout<<"|";
            }
        }
        cout<<endl;
        if(i<2){
            cout<<"---"<<endl;
        }
    }
}
/* Function to check if there is winner */
bool check_winner(char player){
    /* Checking rows and columns */
    for(int i=0;i<3;i++){
        if((board[i][0] == player && board[i][1] == player && board[i][2] == player) || (board[0][i] == player && board[1][i] == player && board[2][i] == player)){
            return true;
        }
    }
    /* Checking diagonals */
    if((board[0][0] == player && board[1][1] == player && board[2][2] == player) || (board[0][2] == player && board[1][1] == player && board[2][0] == player)){
        return true;
    }
    return false;
}
int main(){
    int row,col;
    char current_player = 'x';
    while (true){
        printboard();
        cout<<" Player" << current_player << ", Enter your move (row and column): ";
        cin>>row>>col;

        if(row >= 0 && row<3 && col>=0 && col<3 && board[row][col] == '-'){
            board[row][col]=current_player;
            if(check_winner(current_player)){
                printboard();
                cout<< "Player "<< current_player << " wins!"<< endl;
                break;
            }
        if(current_player = 'X'){
                current_player='O';
            }else{
                current_player='X';
            }
            }else{
                cout<< "Invalid Move! Try again."<< endl;
                
        }
    
    }
    return 0;
}
