#include "config.h"

config::config()
{
    //ctor
}

config::~config()
{
    //dtor
}
int config::check_win(int board[][WIDTH])
{
    int result = 0;

    // horizontal check
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH-5; j++) {
            if (board[i][j] != 0) {
                if (board[i][j]==board[i][j+1] &&
                    board[i][j+1]==board[i][j+2] &&
                    board[i][j+2]==board[i][j+3] &&
                    board[i][j+3]==board[i][j+4]) {
                    if (board[i][j] == 1)
                       result = 1;
                    else
                        result = -1;
                }
            }
        }
    }

    // vertical check
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH-5; j++) {
            if (board[j][i] != 0){
                if (board[j][i]==board[j+1][i] &&
                    board[j+1][i]==board[j+2][i] &&
                    board[j+2][i]==board[j+3][i] &&
                    board[j+3][i]==board[j+4][i]) {
                    if (board[j][i] == 1)
                       result = 1;
                    else
                        result = -1;
                }
            }
        }
    }

    // upper-half top-down diagonal
    for (int j = 0; j<HEIGHT-4; j++) {
        int k = j;
        for (int i = 0; i <= WIDTH-5-j; i++, k++) {
            if (board[i][k] != 0){
                if (board[i][k]==board[i+1][k+1] &&
                    board[i+1][k+1]==board[i+2][k+2] &&
                    board[i+2][k+2]==board[i+3][k+3] &&
                    board[i+3][k+3]==board[i+4][k+4]) {
                    if (board[i][k] == 1)
                       result = 1;
                    else
                        result = -1;
                }
            }
        }
    }

    // lower-half top-down diagonal
    for (int i = 1; i <= HEIGHT-5; i++) {
        int k = i;
        for (int j = 0; k <= HEIGHT-5; k++, j++) {
            if (board[k][j] != 0)
                {
                if (board[k][j]==board[k+1][j+1] &&
                    board[k+1][j+1]==board[k+2][j+2] &&
                    board[k+2][j+2]==board[k+3][j+3] &&
                    board[k+3][j+3]==board[k+4][j+4])
                    {
                    if (board[k][j] == 1)
                       result = 1;
                    else
                        result = -1;
                     }
            }
        }
    }

    // upper-half down-top diagonal
    for (int j = WIDTH-1; j >= 5; j--) {
        int k = j;
        for (int i = 0; k >= 5; k--, i++) {
            if (board[i][k]!=0) {
                if (board[i][k]==board[i+1][k-1] &&
                    board[i+1][k-1]==board[i+2][k-2] &&
                    board[i+2][k-2]==board[i+3][k-3] &&
                    board[i+3][k-3]==board[i+4][k-4]) {
                    if (board[i][k] == 1)
                       result = 1;
                    else
                        result = -1;
                }
            }
        }
    }

    // lower-half down-top diagonal
    for (int i = 1; i <= HEIGHT-5; i++) {
        int k = i;
        for (int j = WIDTH-1; k <= HEIGHT-5; k++, j--) {
            if (board[k][j]!=0) {
                if (board[k][j]==board[k+1][j-1] &&
                    board[k+1][j-1]==board[k+2][j-2] &&
                    board[k+2][j-2]==board[k+3][j-3] &&
                    board[k+3][j-3]==board[k+4][j-4]) {
                    if (board[k][j] == 1)
                       result = 1;
                    else
                        result = -1;
                }

            }
        }
    }

    return result;
}
