#ifndef BOTBASELINE_H
#define BOTBASELINE_H

#ifndef BOTBASELINE
#define BOTBASELINE

#include <iostream>
#include <stdlib.h>
#include "config.h"
using namespace std;
Point check_win(int board_game[][WIDTH], int player_id);
Point defend(int board_game[][WIDTH], int player_id);
Point attack(int board_game[][WIDTH], int player_id);
Point check_n_tile(int board_game[][WIDTH], int player_id, int n);


// player_id = 1 || -1
inline Point player_rand(int board_game[][WIDTH], int player_id){
    int row, col;
    row = 1;
    col = 2;
    return Point(row, col);
}

/*Point player_baseline(int board_game[][WIDTH], int player_id){
    Point p = check_win(board_game, player_id);
    if(p.x != -1 && p.y != -1){
        return p;
    } else {
        p = defend(board_game, player_id);
        if(p.x != -1 && p.y != -1){
            return p;
        } else {
            return attack(board_game, player_id);
        }
    }
}*/

#endif // BOTBASELINE
class botbaseline
{
    public:
        botbaseline();
        virtual ~botbaseline();
     bool first = true;

    int horizontalScore(int x, int y, int sign,int[][WIDTH]);
    int verticalScore(int x, int y, int sign, int [][WIDTH]);
    int topdownDiagonalScore(int x, int y, int sign, int[][WIDTH]);
    int downtopDiagonalScore(int x, int y, int sign, int[][WIDTH]);

    Point player_baseline(int [][WIDTH],int player_id);
    protected:

    private:
};

#endif // BOTBASELINE_H
