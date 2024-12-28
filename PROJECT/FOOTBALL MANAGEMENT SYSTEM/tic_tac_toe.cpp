#include <iostream>
#include <vector>
using namespace std;

const int SIZE = 6;


int main(){
    vector<vector<char>> board(SIZE, vector<char>(SIZE));
    int xWins = 0,oWins = 0, draws = 0;
    bool playAgain = true;
    char player = 'X';

    while(playAgain){
        initializeBoard(board);
        bool gameWon = false;

        while(!gameWon && !isBoardFull(board)){
            displayBoard(board);
            int row, col;
            getPlayerMove(board, player, row, col);

            if(checkWin(board, player, row, col)){
                gameWon = true;
                displayBoard(board);
                cout << "Player " << player << " wins!" << endl;
                if(player == 'X'){
                    xWins++;
                } else{
                    oWins++;
                }
            } else{
                player = (player == 'X') ? 'O' : 'X';

            }
        }

        if(!gameWon){
            displayBoard(board);
            cout<<"It's a draw!" << endl;
            draws++;
        }

        cout<< "\nScoreBoard: X Wins = " << xWins << " | O Wins = " << oWins << " | Draws = " << draws << endl;

        char response;
        cout << "Do you want to play again? (Y/N): ";
        cin >> response;
        playAgain = (response == 'Y' || response == 'y');
    }

    cout<< "Thanks for playing! Final ScoreBoard:\n";
    cout<< "X Wins: " << xWins << ", O Wins: " << oWins << ", Draws: " << draws << endl;

    return 0;
}