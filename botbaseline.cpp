
// Team: XO_CREW

#include "botbaseline.h"
botbaseline::botbaseline()
{
}

botbaseline::~botbaseline()
{
    //dtor
}
int botbaseline::horizontalScore(int x, int y, int sign,int board[][WIDTH])   // tính điểm hàng ngang
{
    int score = 0;

    board[x][y] = sign;

    if ((board[x][y]==sign && board[x][y+1]==sign && board[x][y+2]==sign &&
         board[x][y+3]==sign && board[x][y+4]==sign)|| // Xxxxx

        (board[x][y-1]==sign && board[x][y]==sign && board[x][y+1]==sign &&
         board[x][y+2]==sign && board[x][y+3]==sign)|| // xXxxx

        (board[x][y-2]==sign && board[x][y-1]==sign && board[x][y]==sign &&
         board[x][y+1]==sign && board[x][y+2]==sign)|| // xxXxx

        (board[x][y-3]==sign && board[x][y-2]==sign && board[x][y-1]==sign &&
         board[x][y]==sign && board[x][y+1]==sign)|| // xxxXx

        (board[x][y-4]==sign && board[x][y-3]==sign && board[x][y-2]==sign &&
         board[x][y-1]==sign && board[x][y]==sign)) // xxxxX
         {
            score = 50000;
         }
    else if ((board[x][y-1]== 0 && board[x][y]==sign && board[x][y+1]==sign &&
         board[x][y+2]==sign && board[x][y+3]==sign && board[x][y+4]==0)|| // -Xxxx-

        (board[x][y-2]== 0 && board[x][y-1]==sign && board[x][y]==sign &&
         board[x][y+1]==sign && board[x][y+2]==sign && board[x][y+3]==0)|| // -xXxx-

        (board[x][y-3]== 0 && board[x][y-2]==sign && board[x][y-1]==sign &&
         board[x][y]==sign && board[x][y+1]==sign && board[x][y+2]==0)||  // -xxXx-

        (board[x][y-4]== 0 && board[x][y-3]==sign && board[x][y-2]==sign &&
         board[x][y-1]==sign && board[x][y]==sign && board[x][y+1]== 0))
         {
            if (sign==1)
            {
                score = 7000;
            }else{
                score = 4320;
            }
         }
     else if ((board[x][y-1]==0 && board[x][y]==sign && board[x][y+1]==sign &&
         board[x][y+2]==sign && board[x][y+3]==0 && board[x][y+4]==0)|| // -Xxx--

        (board[x][y-2]==0 && board[x][y-1]==sign && board[x][y]==sign &&
         board[x][y+1]==sign && board[x][y+2]==0 && board[x][y+3]==0)||  // -xXx--

        (board[x][y-3]==0 && board[x][y-2]==sign && board[x][y-1]==sign &&
         board[x][y]==sign && board[x][y+1]==0 && board[x][y+2]==0))    // -xxX--
         {
             score = 720;
         }
    else if ((board[x][y-2]==0 && board[x][y-1]==0 && board[x][y]==sign &&
         board[x][y+1]==sign && board[x][y+2]==sign && board[x][y+3]==0)||  //--Xxx-

        (board[x][y-3]==0 && board[x][y-2]==0 && board[x][y-1]==sign &&
         board[x][y]==sign && board[x][y+1]==sign && board[x][y+2]==0)||   // --xXx-

        (board[x][y-4]==0 && board[x][y-3]==0 && board[x][y-2]==sign &&
         board[x][y-1]==sign && board[x][y]==sign && board[x][y+1]==0))   // --xxX-
         {
             score = 720;
         }
    else if ((board[x][y-1]== 0 && board[x][y]==sign && board[x][y+1]==sign &&
         board[x][y+2]==0 && board[x][y+3]==sign && board[x][y+4]== 0)||     // -Xx-x-

        (board[x][y-2]==0 && board[x][y-1]==sign && board[x][y]==sign &&
         board[x][y+1]== 0 && board[x][y+2]==sign && board[x][y+3]== 0)||     // -xX-x-

        (board[x][y-4]== 0 && board[x][y-3]==sign && board[x][y-2]==sign &&
         board[x][y-1]== 0 && board[x][y]==sign && board[x][y+1]== 0))    // -xx-X-
         {
            score = 720;
         }
    else if ((board[x][y-1]== 0 && board[x][y]==sign && board[x][y+1]== 0 &&
         board[x][y+2]==sign && board[x][y+3]==sign && board[x][y+4]==0)||   // -X-xx-

        (board[x][y-3]== 0 && board[x][y-2]==sign && board[x][y-1]== 0 &&
         board[x][y]==sign && board[x][y+1]==sign && board[x][y+2]== 0)||   //-x-Xx-

        (board[x][y-4]== 0 && board[x][y-3]==sign && board[x][y-2]== 0 &&
         board[x][y-1]==sign && board[x][y]==sign && board[x][y+1]== 0)) // -x-xX-
         {
               score = 720;
         }
    else if ((board[x][y]==sign && board[x][y+1]==sign && board[x][y+2]==sign &&
         board[x][y+3]==sign && board[x][y+4]==0)||                     // Xxxx-

        (board[x][y-1]==sign && board[x][y]==sign && board[x][y+1]==sign &&
         board[x][y+2]==sign && board[x][y+3]==0)||                     // xXxx-

        (board[x][y-2]==sign && board[x][y-1]==sign && board[x][y]==sign &&
         board[x][y+1]==sign && board[x][y+2]==0)||                      // xxXx-

        (board[x][y-3]==sign && board[x][y-2]==sign && board[x][y-1]==sign &&
         board[x][y]==sign && board[x][y+1]==0))                      // xxxX-
         {
              score = 720;
         }
    else if ((board[x][y-1]==0 && board[x][y]==sign && board[x][y+1]==sign &&
         board[x][y+2]==sign && board[x][y+3]==sign)||             // -Xxxx

        (board[x][y-2]==0 && board[x][y-1]==sign && board[x][y]==sign &&
         board[x][y+1]==sign && board[x][y+2]==sign)||             // -xXxx

        (board[x][y-3]==0 && board[x][y-2]==sign && board[x][y-1]==sign &&
         board[x][y]==sign && board[x][y+1]==sign)||               // -xxXx

        (board[x][y-4]==0 && board[x][y-3]==sign && board[x][y-2]==sign &&
         board[x][y-1]==sign && board[x][y]==sign))               //-xxxX
         {
             score=720;
         }
    else if ((board[x][y]==sign && board[x][y+1]==sign && board[x][y+2]==0 &&
         board[x][y+3]==sign && board[x][y+4]==sign)||           //Xx-xx

        (board[x][y-1]==sign && board[x][y]==sign && board[x][y+1]==0 &&
         board[x][y+2]==sign && board[x][y+3]==sign)||             //xX-xx

        (board[x][y-3]==sign && board[x][y-2]==sign && board[x][y-1]==0 &&
         board[x][y]==sign && board[x][y+1]==sign)||                  // xx-Xx

        (board[x][y-4]==sign && board[x][y-3]==sign && board[x][y-2]==0 &&
         board[x][y-1]==sign && board[x][y]==sign))                    // xx-xX
         {
               score=720;
         }
    else if ((board[x][y]==sign && board[x][y+1]==0 && board[x][y+2]==sign &&
         board[x][y+3]==sign && board[x][y+4]==sign)||               //X-xxx

        (board[x][y-2]==sign && board[x][y-1]==0 && board[x][y]==sign &&
         board[x][y+1]==sign && board[x][y+2]==sign)||              // x-Xxx

        (board[x][y-3]==sign && board[x][y-2]==0 && board[x][y-1]==sign &&
         board[x][y]==sign && board[x][y+1]==sign)||                  // x-xXx

        (board[x][y-4]==sign && board[x][y-3]==0 && board[x][y-2]==sign &&
         board[x][y-1]==sign && board[x][y]==sign))                   //x-xxX
         {
                score=720;
         }
    else if ((board[x][y]==sign && board[x][y+1]==sign && board[x][y+2]==sign &&
         board[x][y+3]==0 && board[x][y+4]==sign)||                   //Xxx-x

        (board[x][y-1]==sign && board[x][y]==sign && board[x][y+1]==sign &&
         board[x][y+2]==0 && board[x][y+3]==sign)||                  //xXx-x

        (board[x][y-2]==sign && board[x][y-1]==sign && board[x][y]==sign &&
         board[x][y+1]==0 && board[x][y+2]==sign)||                  // xxX-x

        (board[x][y-4]==sign && board[x][y-3]==sign && board[x][y-2]==sign &&
         board[x][y-1]==0 && board[x][y]==sign))                    // xxX-X
         {
             score=720;
         }
    else if ((board[x][y-2]==0 && board[x][y-1]==0 && board[x][y]==sign &&
         board[x][y+1]==sign && board[x][y+2]==0 && board[x][y+3]==0 &&
         x < HEIGHT && x >= 0 && (y-2) < WIDTH && (y+3)<WIDTH)||   // --Xx--

        (board[x][y-3]==0 && board[x][y-2]==0 && board[x][y-1]==sign &&
         board[x][y]==sign && board[x][y+1]==0 && board[x][y+2]==0
         && x >= 0 && x < HEIGHT && (y-3)<WIDTH && (y+2) < WIDTH))     // --xX--
         {
             score = 120;
         }
    else if ((board[x][y-2]==0 && board[x][y-1]==0 && board[x][y]==sign &&
         board[x][y+1]==0 && board[x][y+2]==sign && board[x][y+3]==0
         && x >= 0 && x < HEIGHT && (y-2) >= 0 && (y+3) < WIDTH)||    // --X-x-

        (board[x][y-4]==0 && board[x][y-3]==0 && board[x][y-2]==sign &&
         board[x][y-1]==0 && board[x][y]==sign && board[x][y+1]==0
         && x >=0 && x < HEIGHT && (y-4) >= 0 && (y+1) < WIDTH))      // --x-X-
         {
              score = 120;
         }
    else if ((board[x][y-1]==0 && board[x][y]==sign && board[x][y+1]==0 &&
         board[x][y+2]==sign && board[x][y+3]==0 && board[x][y+4]==0
         && x >= 0 && x < HEIGHT && (y-1)<WIDTH && (y+4) < WIDTH)||       // -X-x--

        (board[x][y-3]==0 && board[x][y-2]==sign && board[x][y-1]==0 &&
         board[x][y]==sign && board[x][y+1]==0 && board[x][y+2]==0
         && x >= 0 && x < HEIGHT && (y-3) < WIDTH && (y+2) < WIDTH))     // -x-X--
         {
              score = 120;
         }
    else if (board[x][y-3]==0 && board[x][y-2]==0 && board[x][y-1]==0 &&
        board[x][y]==sign && board[x][y+1]==0 && board[x][y+2]==0)   //---X--
        {
               score = 20;
        }
    else if (board[x][y-2]==0 && board[x][y-1]==0 && board[x][y]==sign &&
        board[x][y+1]==0 && board[x][y+2]==0 && board[x][y+3]==0)    //--X---
        {
               score = 20;
        }

    board[x][y] = 0;
    return score;
}

int botbaseline::verticalScore(int x, int y, int sign,int board[][WIDTH])   // tính điểm hàng dọc
{
    int score = 0;

    board[x][y]=sign;

    if ((board[x][y]==sign && board[x+1][y]==sign && board[x+2][y]==sign &&
         board[x+3][y]==sign && board[x+4][y]==sign)||
        (board[x-1][y]==sign && board[x][y]==sign && board[x+1][y]==sign &&
         board[x+2][y]==sign && board[x+3][y]==sign)||
        (board[x-2][y]==sign && board[x-1][y]==sign && board[x][y]==sign &&
         board[x+1][y]==sign && board[x+2][y]==sign)||
        (board[x-3][y]==sign && board[x-2][y]==sign && board[x-1][y]==sign &&
         board[x][y]==sign && board[x+1][y]==sign)||
        (board[x-4][y]==sign && board[x-3][y]==sign && board[x-2][y]==sign &&
         board[x-1][y]==sign && board[x][y]==sign)) {
            score = 50000;

    }

    else if ((board[x-1][y]==0 && board[x][y]==sign && board[x+1][y]==sign &&
              board[x+2][y]==sign && board[x+3][y]==sign && board[x+4][y]==0)||
             (board[x-2][y]==0 && board[x-1][y]==sign && board[x][y]==sign &&
              board[x+1][y]==sign && board[x+2][y]==sign && board[x+3][y]==0)||
             (board[x-3][y]==0 && board[x-2][y]==sign && board[x-1][y]==sign &&
              board[x][y]==sign && board[x+1][y]==sign && board[x+2][y]==0)||
             (board[x-4][y]==0 && board[x-3][y]==sign && board[x-2][y]==sign &&
              board[x-1][y]==sign && board[x][y]==sign && board[x+1][y]==0)){
                 if (sign==1) {
                     score = 7000;
                 }else{
                     score = 4320;
                 }

    }

    else if ((board[x-1][y] == 0 && board[x][y] == sign && board[x+1][y] == sign &&
              board[x+2][y] == sign && board[x+3][y] ==0 && board[x+4][y] == 0 )||
             (board[x-2][y] == 0 && board[x-1][y] == sign && board[x][y] == sign &&
              board[x+1][y] == sign && board[x+2][y] ==0 && board[x+3][y] == 0)||
             (board[x-3][y] == 0 && board[x-2][y] == sign && board[x-1][y] == sign &&
              board[x][y] == sign && board[x+1][y] == 0 && board[x+2][y] == 0))
    {
        score = 720;
    }

    else if ((board[x-2][y] == 0 && board[x-1][y] == 0 && board[x][y] == sign &&
              board[x+1][y] == sign && board[x+2][y] == sign && board[x+3][y] == 0)||
             (board[x-3][y] == 0 && board[x-2][y] == 0 && board[x-1][y] == sign &&
              board[x][y] == sign && board[x+1][y] == sign && board[x+2][y] == 0)||
             (board[x-4][y] == 0 && board[x-3][y] == 0 && board[x-2][y] == sign &&
              board[x-1][y] == sign && board[x][y] == sign && board[x-1][y] == 0))
    {
        score = 720;
    }

    else if ((board[x-1][y] == 0 && board[x][y] == sign && board[x+1][y] == sign &&
              board[x+2][y] == 0 && board[x+3][y] == sign && board[x+4][y] == 0)||
             (board[x-2][y] == 0 && board[x-1][y] == sign && board[x][y] == sign &&
              board[x+1][y] == 0 && board[x+2][y] == sign && board[x+3][y] == 0)||
             (board[x-4][y] == 0 && board[x-3][y] == sign && board[x-2][y] == sign &&
              board[x-1][y] == 0 && board[x][y] == sign && board[x+1][y] == 0))
    {
        score = 720;
    }

    else if ((board[x-1][y] == 0 && board[x][y] == sign && board[x+1][y] == 0 &&
              board[x+2][y] == sign && board[x+3][y] == sign && board[x+4][y] == 0)||
             (board[x-3][y] == 0 && board[x-2][y] == sign && board[x-1][y] == 0 &&
              board[x][y] == sign && board[x+1][y] == sign && board[x+2][y] == 0)||
             (board[x-4][y] == 0 && board[x-3][y] == sign && board[x-2][y] == 0 &&
              board[x-1][y] == sign && board[x][y] == sign && board[x+1][y] == 0))
    {
        score = 720;
    }

    else if ((board[x][y] == sign && board[x+1][y] == sign && board[x+2][y] == sign &&
              board[x+3][y] == sign && board[x+4][y] == 0 )||
             (board[x-1][y] == sign && board[x][y] == sign && board[x+1][y] == sign &&
              board[x+2][y] == sign && board[x+3][y] == 0 )||
             (board[x-2][y] == sign && board[x-1][y] == sign && board[x][y] == sign &&
              board[x+1][y] == sign && board[x+2][y] == 0 )||
             (board[x-3][y] == sign && board[x-2][y] == sign && board[x-1][y] == sign &&
              board[x][y] == sign && board[x+1][y] == 0 ))
    {
        score = 720;
    }

    else if ((board[x][y] == sign && board[x+1][y] == sign && board[x+2][y] == 0 &&
              board[x+3][y] == sign && board[x+4][y] == sign)||
             (board[x-1][y] == sign && board[x][y] == sign && board[x+1][y] == 0 &&
              board[x+2][y] == sign && board[x+3][y] == sign)||
             (board[x-3][y] == sign && board[x-2][y] == sign && board[x-1][y] == 0 &&
              board[x][y] == sign && board[x+1][y] == sign)||
             (board[x-4][y] == sign && board[x-3][y] == sign && board[x-2][y] == 0 &&
              board[x-1][y] == sign && board[x][y] == sign))
    {
        score = 720;
    }

    else if ((board[x-1][y] == 0 && board[x][y] == sign && board[x+1][y] == sign &&
              board[x+2][y] == sign && board[x+3][y] == sign  )||
             (board[x-2][y] == 0 && board[x-1][y] == sign && board[x][y] == sign &&
              board[x+1][y] == sign && board[x+2][y] == sign )||
             (board[x-3][y] == 0 && board[x-2][y] == sign && board[x-1][y] == sign &&
              board[x][y] == sign && board[x+1][y] == sign )||
             (board[x-4][y] == 0 && board[x-3][y] == sign && board[x-2][y] == sign &&
              board[x-1][y] == sign && board[x][y] == sign )){
                 score = 720;
             }

    else if ((board[x][y] == sign && board[x+1][y] == 0 && board[x+2][y] ==sign &&
             board[x+3][y] == sign && board[x+4][y] == sign)||
            (board[x-2][y] == sign && board[x-1][y] == 0 && board[x][y] ==sign &&
             board[x+1][y] == sign && board[x+2][y] == sign)||
            (board[x-3][y] == sign && board[x-2][y] == 0 && board[x-1][y] ==sign &&
             board[x][y] == sign && board[x+1][y] == sign)||
            (board[x-4][y] == sign && board[x-3][y] == 0 && board[x-2][y] ==sign &&
             board[x-1][y] == sign && board[x][y] == sign)){
                score = 720;
            }

    else if ((board[x][y] == sign && board[x+1][y] == sign && board[x+2][y] == sign &&
             board[x+3][y] == 0 && board[x+4][y] == sign)||
            (board[x-1][y] == sign && board[x][y] == sign && board[x+1][y] == sign &&
             board[x+2][y] == 0 && board[x+3][y] == sign)||
            (board[x-2][y] == sign && board[x-1][y] == sign && board[x][y] == sign &&
             board[x+1][y] == 0 && board[x+2][y] == sign)||
            (board[x-4][y] == sign && board[x-3][y] == sign && board[x-2][y] == sign &&
             board[x-1][y] == 0 && board[x][y] == sign))
            {
                score = 720;
            }

    else if ((board[x-2][y] == 0 && board[x-1][y] == 0 && board[x][y] == sign &&
             board[x+1][y] == sign && board[x+2][y] == 0
             && (x-2) >= 0 && (x+2) < HEIGHT && y >= 0 && y < WIDTH)||
            (board[x-3][y] == 0 && board[x-2][y] == 0 && board[x-1][y] == sign &&
             board[x][y] == sign && board[x+1][y] == 0
             && (x-3) >= 0 && (x+1) < HEIGHT && y >= 0 && y < WIDTH))
            {
                score = 120;
            }

    else if ((board[x-2][y] == 0 && board[x-1][y] == 0 && board[x][y] == sign &&
             board[x+1][y] == 0 && board[x+2][y] == sign && board[x+3][y] ==0)||
            (board[x-4][y] == 0 && board[x-3][y] == 0 && board[x-2][y] == sign &&
             board[x-1][y] == 0 && board[x][y] == sign && board[x+1][y] ==0))
            {
                score = 120;
            }

    else if ((board[x-1][y] == 0 && board[x][y] == sign && board[x+1][y] == 0 &&
             board[x+2][y] == sign && board[x+3][y] == 0 && board[x+4][y] == 0
             && (x-1) >= 0 && (x+4) < HEIGHT && y >= 0 && y < WIDTH )||

            (board[x-3][y] == 0 && board[x-2][y] == sign && board[x-1][y] == 0 &&
             board[x][y] == sign && board[x+1][y] == 0 && board[x+2][y] == 0
             && (x-3) >= 0 && (x+2) < HEIGHT && y >= 0 && y < WIDTH ))
            {
                score = 120;
            }

    else if (board[x-3][y] == 0 && board[x-2][y] == 0 && board[x-1][y] == 0 &&
             board[x][y] == sign && board[x+1][y] == 0 && board[x+2][y] == 0 )
            {
                score = 20;
            }

    else if (board[x-2][y] == 0 && board[x-1][y] == 0 && board[x][y] == sign &&
             board[x+1][y] == 0 && board[x+2][y] == 0 && board[x+3][y] == 0)
            {
                score = 20;
            }

            board[x][y] =0 ;

            return score;


}
int botbaseline::topdownDiagonalScore(int x, int y, int sign, int board[][WIDTH])   // Tinh điểm từ trái sang phải
{
    int score = 0;
    board[x][y] = sign;

    if ((board[x][y]==sign && board[x+1][y+1]==sign && board[x+2][y+2]==sign &&
         board[x+3][y+3]==sign && board[x+4][y+4]==sign)||
        (board[x-1][y-1]==sign && board[x][y]==sign && board[x+1][y+1]==sign &&
         board[x+2][y+2]==sign && board[x+3][y+3]==sign)||
        (board[x-2][y-2]==sign && board[x-1][y-1]==sign && board[x][y]==sign &&
         board[x+1][y+1]==sign && board[x+2][y+2]==sign)||
        (board[x-3][y-3]==sign && board[x-2][y-2]==sign && board[x-1][y-1]==sign &&
         board[x][y]==sign && board[x+1][y+1]==sign)||
        (board[x-4][y-4]==sign && board[x-3][y-3]==sign && board[x-2][y-2]==sign &&
         board[x-1][y-1]==sign && board[x][y]==sign)) {
            score = 50000;

    }else if ((board[x-1][y-1]==0 && board[x][y]==sign && board[x+1][y+1]==sign &&
         board[x+2][y+2]==sign && board[x+3][y+3]==sign && board[x+4][y+4]==0)||
        (board[x-2][y-2]==0 && board[x-1][y-1]==sign && board[x][y]==sign &&
         board[x+1][y+1]==sign && board[x+2][y+2]==sign && board[x+3][y+3]==0)||
        (board[x-3][y-3]==0 && board[x-2][y-2]==sign && board[x-1][y-1]==sign &&
         board[x][y]==sign && board[x+1][y+1]==sign && board[x+2][y+2]==0)||
        (board[x-4][y-4]==0 && board[x-3][y-3]==sign && board[x-2][y-2]==sign &&
         board[x-1][y-1]==sign && board[x][y]==sign && board[x+1][y+1]==0)) {
            if (sign==1) {
                score = 7000;
            }else{
                score = 4320;
            }
    }else if ((board[x-1][y-1]==0 && board[x][y]==sign && board[x+1][y+1]==sign &&
         board[x+2][y+2]==sign && board[x+3][y+3]==0 && board[x+4][y+4]==0)||
        (board[x-2][y-2]==0 && board[x-1][y-1]==sign && board[x][y]==sign &&
         board[x+1][y+1]==sign && board[x+2][y+2]==0 && board[x+3][y+3]==0)||
        (board[x-3][y-3]==0 && board[x-2][y-2]==sign && board[x-1][y-1]==sign &&
         board[x][y]==sign && board[x+1][y+1]==0 && board[x+2][y+2]==0)) {
            score = 720;
    }else if ((board[x-2][y-2]==0 && board[x-1][y-1] && board[x][y]==sign &&
         board[x+1][y+1]==sign && board[x+2][y+2]==sign && board[x+3][y+3]==0)||
        (board[x-3][y-3]==0 && board[x-2][y-2] && board[x-1][y-1]==sign &&
         board[x][y]==sign && board[x+1][y+1]==sign && board[x+2][y+2]==0)||
        (board[x-4][y-4]==0 && board[x-3][y-3] && board[x-2][y-2]==sign &&
         board[x-1][y-1]==sign && board[x][y]==sign && board[x+1][y+1]==0)) {
            score = 720;
    }else if ((board[x-1][y-1]==0 && board[x][y]==sign && board[x+1][y+1]==sign &&
         board[x+2][y+2]==0 && board[x+3][y+3]==sign && board[x+4][y+4]==0)||
        (board[x-2][y-2]==0 && board[x-1][y-1]==sign && board[x][y]==sign &&
         board[x+1][y+1]==0 && board[x+2][y+2]==sign && board[x+3][y+3]==0)||
        (board[x-4][y-4]==0 && board[x-3][y-3]==sign && board[x-2][y-2]==sign &&
         board[x-1][y-1]==0 && board[x][y]==sign && board[x+1][y+1]==0)) {
            score = 720;
    }else if ((board[x-1][y-1]==0 && board[x][y]==sign && board[x+1][y+1]==0 &&
               board[x+2][y+2]==sign && board[x+3][y+3]==sign && board[x+4][y+4]==0)||
              (board[x-3][y-3]==0 && board[x-2][y-2]==sign && board[x-1][y-1]==0 &&
               board[x][y]==sign && board[x+1][y+1]==sign && board[x+2][y+2]==0)||
              (board[x-4][y-4]==0 && board[x-3][y-3]==sign && board[x-2][y-2]==0 &&
               board[x-1][y-1]==sign && board[x][y]==sign && board[x+1][y+1]==0)){
            score = 720;
    }else if ((board[x][y]==sign && board[x+1][y+1]==sign && board[x+2][y+2]==sign &&
               board[x+3][y+3]==sign && board[x+4][y+4]==0)||
              (board[x-1][y-1]==sign && board[x][y]==sign && board[x+1][y+1]==sign &&
               board[x+2][y+2]==sign && board[x+3][y+3]==0)||
              (board[x-2][y-2]==sign && board[x-1][y-1]==sign && board[x][y]==sign &&
               board[x+1][y+1]==sign && board[x+2][y+2]==0)||
              (board[x-3][y-3]==sign && board[x-2][y-2]==sign && board[x-1][y-1]==sign &&
               board[x][y]==sign && board[x+1][y+1]==0)){
            score = 720;
    }else if ((board[x-1][y-1]==0 && board[x][y]==sign && board[x+1][y+1]==sign &&
               board[x+2][y+2]==sign && board[x+3][y+3]==sign)||
              (board[x-2][y-2]==0 && board[x-1][y-1]==sign && board[x][y]==sign &&
               board[x+1][y+1]==sign && board[x+2][y+2]==sign)||
              (board[x-3][y-3]==0 && board[x-2][y-2]==sign && board[x-1][y-1]==sign &&
               board[x][y]==sign && board[x+1][y+1]==sign)||
              (board[x-4][y-4]==0 && board[x-3][y-3]==sign && board[x-2][y-2]==sign &&
               board[x-1][y-1]==sign && board[x][y]==sign)){
            score = 720;
    }else if ((board[x][y]==sign && board[x+1][y+1]==sign && board[x+2][y+2]==0 &&
               board[x+3][y+3]==sign && board[x+4][y+4]==sign)||
              (board[x-1][y-1]==sign && board[x][y]==sign && board[x+1][y+1]==0 &&
               board[x+2][y+2]==sign && board[x+3][y+3]==sign)||
              (board[x-3][y-3]==sign && board[x-2][y-2]==sign && board[x-1][y-1]==0 &&
               board[x][y]==sign && board[x+1][y+1]==sign)||
              (board[x-4][y-4]==sign && board[x-3][y-3]==sign && board[x-2][y-2]==0 &&
               board[x-1][y-1]==sign && board[x][y]==sign)){
            score = 720;
    }else if ((board[x][y]==sign && board[x+1][y+1]==0 && board[x+2][y+2]==sign &&
               board[x+3][y+3]==sign && board[x+4][y+4]==sign)||
              (board[x-2][y-2]==sign && board[x-1][y-1]==0 && board[x][y]==sign &&
               board[x+1][y+1]==sign && board[x+2][y+2]==sign)||
              (board[x-3][y-3]==sign && board[x-2][y-2]==0 && board[x-1][y-1]==sign &&
               board[x][y]==sign && board[x+1][y+1]==sign)||
              (board[x-4][y-4]==sign && board[x-3][y-3]==0 && board[x-2][y-2]==sign &&
               board[x-1][y-1]==sign && board[x][y]==sign)){
            score = 720;
    }else if ((board[x][y]==sign && board[x+1][y+1]==sign && board[x+2][y+2]==sign &&
               board[x+3][y+3]==0 && board[x+4][y+4]==sign)||
              (board[x-1][y-1]==sign && board[x][y]==sign && board[x+1][y+1]==sign &&
               board[x+2][y+2]==0 && board[x+3][y+3]==sign)||
              (board[x-2][y-2]==sign && board[x-1][y-1]==sign && board[x][y]==sign &&
               board[x+1][y+1]==0 && board[x+2][y+2]==sign)||
              (board[x-4][y-4]==sign && board[x-3][y-3]==sign && board[x-2][y-2]==sign &&
               board[x-1][y-1]==0 && board[x][y]==sign)){
            score = 720;

    }


    else if ((board[x-2][y-2]==0 && board[x-1][y-1]==0 && board[x][y]==sign &&
               board[x+1][y+1]==sign && board[x+2][y+2]==0 && board[x+3][y+3]==0
               && (x-2) >= 0 && (x-2)<HEIGHT && (y-2) < WIDTH && (x+3) >= 0 && (x+3) < HEIGHT
              && (y+3) < WIDTH)||

              (board[x-3][y-3]==0 && board[x-2][y-2]==0 && board[x-1][y-1]==sign &&
               board[x][y]==sign && board[x+1][y+1]==0 && board[x+2][y+2]==0
               && (x-3)>=0 && (x-3) < HEIGHT && (y-3) < WIDTH && (x+2) >= 0 && (x+2) < HEIGHT
               && (y+2) < WIDTH)){
            score = 120;
    }else if ((board[x-2][y-2]==0 && board[x-1][y-1]==0 && board[x][y]==sign &&
               board[x+1][y+1]==0 && board[x+2][y+2]==sign && board[x+3][y+3]==0
               && (x-2) >= 0 && (x-2) < HEIGHT && (x+3) >= 0 && (x+3) < HEIGHT
               && (y-2) >= 0 && (y+3) < WIDTH)||

              (board[x-4][y-4]==0 && board[x-3][y-3]==0 && board[x-2][y-2]==sign &&
               board[x-1][y-1]==0 && board[x][y]==sign && board[x+1][y+1]==0
               && (x-4) >= 0 && (x-4) < HEIGHT && (x+1) >= 0 && (x+1) < HEIGHT &&
               (y-4) >= 0 && (y-4) < WIDTH)){
            score = 120;
    }else if ((board[x-1][y-1]==0 && board[x][y]==sign && board[x+1][y+1]==0 &&
               board[x+2][y+2]==sign && board[x+3][y+3]==0 && board[x+4][y+4]==0
               && (x-1) >= 0 && (x+4) < HEIGHT && (y-1) >= 0 && (y+4) < WIDTH)||

              (board[x-3][y-3]==0 && board[x-2][y-2]==sign && board[x-1][y-1]==0 &&
               board[x][y]==sign && board[x+1][y+1]==0 && board[x+2][y+2]==0
               && (x-3) >= 0 && (x+2) < HEIGHT && (y-3) >= 0 && (y+2) < WIDTH)){
            score = 120;

    }


    else if (board[x-3][y-3]==0 && board[x-2][y-2]==0 && board[x-1][y-1]==0 &&
              board[x][y]==sign && board[x+1][y+1]==0 && board[x+2][y+2]==0){
            score = 20;
    }else if (board[x-2][y-2]==0 && board[x-1][y-1]==0 && board[x][y]==sign &&
              board[x+1][y+1]==0 && board[x+2][y+2]==0 && board[x+3][y+3]==0){
            score = 20;
    }

    board[x][y] = 0;

    return score;
}
int botbaseline::downtopDiagonalScore(int x, int y, int sign, int board[][WIDTH])   // Tính điểm chéo từ phải qua trái
{
    int score = 0;

    board[x][y] = sign;

    if ((board[x][y]==sign && board[x+1][y-1]==sign && board[x+2][y-2]==sign &&
         board[x+3][y-3]==sign && board[x+4][y-4]==sign)||
        (board[x-1][y+1]==sign && board[x][y]==sign && board[x+1][y-1]==sign &&
         board[x+2][y-2]==sign && board[x+3][y-3]==sign)||
        (board[x-2][y+2]==sign && board[x-1][y+1]==sign && board[x][y]==sign &&
         board[x+1][y-1]==sign && board[x+2][y-2]==sign)||
        (board[x-3][y+3]==sign && board[x-2][y+2]==sign && board[x-1][y+1]==sign &&
         board[x][y]==sign && board[x+1][y-1]==sign)||
        (board[x-4][y+4]==sign && board[x-3][y+3]==sign && board[x-2][y+2]==sign &&
         board[x-1][y+1]==sign && board[x][y]==sign)) {
            score = 50000;
    }

    else if ((board[x-1][y+1]==0 && board[x][y]==sign && board[x+1][y-1]==sign &&
              board[x+2][y-2]==sign && board[x+3][y-3]==sign && board[x+4][y-4]==0)||
             (board[x-2][y+2]==0 && board[x-1][y+1]==sign && board[x][y]==sign &&
              board[x+1][y-1]==sign && board[x+2][y-2]==sign && board[x+3][y-3]==0)||
             (board[x-3][y+3]==0 && board[x-2][y+2]==sign && board[x-1][y+1]==sign &&
              board[x][y]==sign && board[x+1][y-1]==sign && board[x+2][y-2]==0)||
             (board[x-4][y+4]==0 && board[x-3][y+3]==sign && board[x-2][y+2]==sign &&
              board[x-1][y+1]==sign && board[x][y]==sign && board[x+1][y-1]==0)){
                 if (sign==1) {
                     score = 7000;
                 }else{
                     score = 4320;
                 }
    }

    else if ((board[x-1][y+1]==0 && board[x][y]==sign && board[x+1][y-1]==sign &&
              board[x+2][y-2]==sign && board[x+3][y-3]==0 && board[x+4][y-4]==0)||
             (board[x-2][y+2]==0 && board[x-1][y+1]==sign && board[x][y]==sign &&
              board[x+1][y-1]==sign && board[x+2][y-2]==0 && board[x+3][y-3]==0)||
             (board[x-3][y+3]==0 && board[x-2][y+2]==sign && board[x-1][y+1]==sign &&
              board[x][y]==sign && board[x+1][y-1]==0 && board[x+2][y-2]==0)){
        score = 720;
    }


    else if ((board[x-2][y+2]==0 && board[x-1][y+1]==0 && board[x][y]==sign &&
              board[x+1][y-1]==sign && board[x+2][y-2]==sign && board[x+3][y-3]==0)||
             (board[x-3][y+3]==0 && board[x-2][y+2]==0 && board[x-1][y+1]==sign &&
              board[x][y]==sign && board[x+1][y-1]==sign && board[x+2][y-2]==0)||
             (board[x-4][y+4]==0 && board[x-3][y+3]==0 && board[x-2][y+2]==sign &&
              board[x-1][y+1]==sign && board[x][y]==sign && board[x+1][y-1]==0)){
        score = 720;
    }


    else if ((board[x-1][y+1]==0 && board[x][y]==sign && board[x+1][y-1]==sign &&
              board[x+2][y-2]==0 && board[x+3][y-3]==sign && board[x+4][y-4]==0)||
             (board[x-2][y+2]==0 && board[x-1][y+1]==sign && board[x][y]==sign &&
              board[x+1][y-1]==0 && board[x+2][y-2]==sign && board[x+3][y-3]==0)||
             (board[x-4][y+4]==0 && board[x-3][y+3]==sign && board[x-2][y+2]==sign &&
              board[x-1][y+1]==0 && board[x][y]==sign && board[x+1][y-1]==0)){
        score = 720;
    }


    else if ((board[x-1][y+1]==0 && board[x][y]==sign && board[x+1][y-1]==0 &&
              board[x+2][y-2]==sign && board[x+3][y-3]==sign && board[x+4][y-4]==0)||
             (board[x-3][y+3]==0 && board[x-2][y+2]==sign && board[x-1][y+1]==0 &&
              board[x][y]==sign && board[x+1][y-1]==sign && board[x+2][y-2]==0)||
             (board[x-4][y+4]==0 && board[x-3][y+3]==sign && board[x-2][y+2]==0 &&
              board[x-1][y+1]==sign && board[x][y]==sign && board[x+1][y-1]==0)){
        score = 720;
    }


    else if ((board[x][y]==sign && board[x+1][y-1]==sign && board[x+2][y-2]==sign &&
              board[x+3][y-3]==sign && board[x+4][y-4]==0)||
             (board[x-1][y+1]==sign && board[x][y]==sign && board[x+1][y-1]==sign &&
              board[x+2][y-2]==sign && board[x+3][y-3]==0)||
             (board[x-2][y+2]==sign && board[x-1][y+1]==sign && board[x][y]==sign &&
              board[x+1][y-1]==sign && board[x+2][y-2]==0)||
             (board[x-3][y+3]==sign && board[x-2][y+2]==sign && board[x-1][y+1]==sign &&
              board[x][y]==sign && board[x+1][y-1]==0)){
        score = 720;
    }


    else if ((board[x-1][y+1]==0 && board[x][y]==sign && board[x+1][y-1]==sign &&
              board[x+2][y-2]==sign && board[x+3][y-3]==sign)||
             (board[x-2][y+2]==0 && board[x-1][y+1]==sign && board[x][y]==sign &&
              board[x+1][y-1]==sign && board[x+2][y-2]==sign)||
             (board[x-3][y+3]==0 && board[x-2][y+2]==sign && board[x-1][y+1]==sign &&
              board[x][y]==sign && board[x+1][y-1]==sign)||
             (board[x-4][y+4]==0 && board[x-3][y+3]==sign && board[x-2][y+2]==sign &&
              board[x-1][y+1]==sign && board[x][y]==sign)){
        score = 720;
    }


    else if ((board[x][y]==sign && board[x+1][y-1]==sign && board[x+2][y-2]==0 &&
              board[x+3][y-3]==sign && board[x+4][y-4]==sign)||
             (board[x-1][y+1]==sign && board[x][y]==sign && board[x+1][y-1]==0 &&
              board[x+2][y-2]==sign && board[x+3][y-3]==sign)||
             (board[x-3][y+3]==sign && board[x-2][y+2]==sign && board[x-1][y+1]==0 &&
              board[x][y]==sign && board[x+1][y-1]==sign)||
             (board[x-4][y+4]==sign && board[x-3][y+3]==sign && board[x-2][y+2]==0 &&
              board[x-1][y+1]==sign && board[x][y]==sign)){
        score =720;
    }


    else if ((board[x][y]==sign && board[x+1][y-1]==0 && board[x+2][y-2]==sign &&
              board[x+3][y-3]==sign && board[x+4][y-4]==sign)||
             (board[x-2][y+2]==sign && board[x-1][y+1]==0 && board[x][y]==sign &&
              board[x+1][y-1]==sign && board[x+2][y-2]==sign)||
             (board[x-3][y+3]==sign && board[x-2][y+2]==0 && board[x-1][y+1]==sign &&
              board[x][y]==sign && board[x+1][y-1]==sign)||
             (board[x-4][y+4]==sign && board[x-3][y+3]==0 && board[x-2][y+2]==sign &&
              board[x-1][y+1]==sign && board[x][y]==sign)){
        score = 720;
    }


    else if ((board[x][y]==sign && board[x+1][y-1]==sign && board[x+2][y-2]==sign &&
              board[x+3][y-3]==0 && board[x+4][y-4]==sign)||
             (board[x-1][y+1]==sign && board[x][y]==sign && board[x+1][y-1]==sign &&
              board[x+2][y-2]==0 && board[x+3][y-3]==sign)||
             (board[x-2][y+2]==sign && board[x-1][y+1]==sign && board[x][y]==sign &&
              board[x+1][y-1]==0 && board[x+2][y-2]==sign)||
             (board[x-4][y+4]==sign && board[x-3][y+3]==sign && board[x-2][y+2]==sign &&
              board[x-1][y+1]==0 && board[x][y]==sign)){
        score = 720;
    }


    else if (( (x-2) >= 0 && (x-2) < HEIGHT && (y+2) >= 0 && (y+2) < WIDTH &&
              board[x-2][y+2]==0 && board[x-1][y+1]==0 && board[x][y]==sign &&
              board[x+1][y-1]==sign && board[x+2][y-2]==0 && board[x+3][y-3]==0
              && (x+3) >= 0 && (x+3) < HEIGHT && (y-3) >= 0 && (y-3) < WIDTH )||

             ( (x-3) >= 0 && (x-3) < HEIGHT && (y+3) >= 0 && (y+3) < WIDTH &&
              board[x-3][y+3]==0 && board[x-2][y+2]==0 && board[x-1][y+1]==sign &&
              board[x][y]==sign && board[x+1][y-1]==0 && board[x+2][y-2]==0
              && (x+2) >= 0 && (x+2) < HEIGHT && (y-2) >= 0 && (y-2) < WIDTH) ){
        score = 120;
    }


    else if (((x-2) >= 0 && (x-2) < HEIGHT && (y+2) >= 0 && (y+2) < WIDTH &&
              board[x-2][y+2]==0 && board[x-1][y+1]==0 && board[x][y]==sign &&
              board[x+1][y-1]==0 && board[x+2][y-2]==sign && board[x+3][y-3]==0
              && (x+3) >= 0 && (x+3) < HEIGHT && (y-3) >= 0 && (y-3) < WIDTH )||

             ( (x-4) >= 0 && (x-4) < HEIGHT && (y+4) >= 0 && (y+4) < WIDTH &&
              board[x-4][y+4]==0 && board[x-3][y+3]==0 && board[x-2][y+2]==sign &&
              board[x-1][y+1]==0 && board[x][y]==sign && board[x+1][y-1]==0
               && (x+1) >= 0 && (x+1) < HEIGHT && (y-1) >= 0 && (y-1) < WIDTH)){
        score = 120;
    }


    else if ((
              (x-1) >= 0 && (x-1) < HEIGHT && (y+1) >= 0 && (y+1) < WIDTH &&
              board[x-1][y+1]==0 && board[x][y]==sign && board[x+1][y-1]==0 &&
              board[x+2][y-2]==sign && board[x+3][y-3]==0 && board[x+4][y-4]==0)||

             (board[x-3][y+3]==0 && board[x-2][y+2]==sign && board[x-1][y+1]==0 &&
              board[x][y]==sign && board[x+1][y-1]==0 && board[x+2][y-2]==0
              && (x+2) >= 0 && (x+2) < HEIGHT && (y-2) >= 0 && (y-2) < WIDTH)){
        score = 120;
    }


    else if (board[x-3][y+3]==0 && board[x-2][y+2]==0 && board[x-1][y+1]==0 &&
             board[x][y]==sign && board[x+1][y-1]==0 && board[x+2][y-2]==0){
        score = 20;
    }


    else if (board[x-2][y+2]==0 && board[x-1][y+1]==0 && board[x][y]==sign &&
             board[x+1][y-1]==0 && board[x+2][y-2]==0 && board[x+3][y-3]==0  ){
        score = 20;
    }

    board[x][y] = 0;

    return score;
}
bool checkNeighbor(int i, int j, int board[][WIDTH])  // Kiểm tra xem các ô xung quanh
{
    if ((board[i-1][j-1]== -1 || board[i-1][j]== -1 || board[i-1][j+1]==-1 ||
         board[i][j-1]==-1 || board[i][j+1]==-1 || board[i+1][j-1]==-1 ||
         board[i+1][j]== -1 || board[i+1][j+1]==-1)||

        (board[i-1][j-1]==1 || board[i-1][j]==1 || board[i-1][j+1]==1 ||
         board[i][j-1]==1 || board[i][j+1]==1 || board[i+1][j-1]==1 ||
         board[i+1][j]==1 || board[i+1][j+1]==1))
         {
            return true;
        }else{
            return false;
        }
}
Point botbaseline:: player_baseline(int board[][WIDTH], int player_id)
{


  if (player_id == 1){
    int x = 0;
    int y = 0;
    int x2 = 0;
    int y2 = 0;
    int max1 = 0;
    int max2 = 0;
    for (int i=0; i<HEIGHT; i++)
    {
        for (int j=0; j< WIDTH; j++) {
            if (board[i][j]==0) {
                if (checkNeighbor(i, j, board)&&
                    (horizontalScore(i, j, 1, board)+        // tính tổng điểm ngang,dọc,chéo phải,chéo trái của O -> nước tấn công
                     topdownDiagonalScore(i, j, 1, board)+
                     verticalScore(i, j, 1, board)+
                     downtopDiagonalScore(i, j, 1, board))>=max1)
                     {

                        max1 = horizontalScore(i, j, 1, board)+
                        topdownDiagonalScore(i, j, 1, board)+
                        verticalScore(i, j, 1, board)+
                        downtopDiagonalScore(i, j, 1, board);
                        x=i;
                        y=j;
                     }
            }
        }
    }

    for (int i=0; i<HEIGHT; i++) {
        for (int j=0; j<WIDTH; j++) {
            if (board[i][j]==0) {
                if (checkNeighbor(i, j, board)&&
                    (horizontalScore(i, j, -1, board)+          // tính tổng điểm ngang,dọc,chéo phải,chéo trái của X
                     topdownDiagonalScore(i, j, -1, board)+     //   -> nước tấn công của X
                     verticalScore(i, j, -1, board)+
                     downtopDiagonalScore(i, j, -1, board))>=max2) {
                    max2 = horizontalScore(i, j, -1, board)+
                        topdownDiagonalScore(i, j, -1, board)+
                        verticalScore(i, j, -1, board)+
                        downtopDiagonalScore(i, j, -1, board);
                    x2=i;
                    y2=j;
                }
            }
        }
    }
    if (max1>=max2)   // Nếu tấn công O lớn hơn X thì tấn công (x,y) không thì phòng thủ
    {
        return Point(x,y);
    }else{
        return Point(x2,y2);
    }}
  else       // Trường hợp của X tương tự
  {
      int x = 0;
    int y = 0;
    int x2 = 0;
    int y2 = 0;
    int max1 = 0;
    int max2 = 0;
    for (int i=0; i<HEIGHT; i++) {
        for (int j=0; j< WIDTH; j++) {
            if (board[i][j]==0) {
                if (checkNeighbor(i, j, board)&&
                    (horizontalScore(i, j, -1, board)+
                     topdownDiagonalScore(i, j, -1, board)+
                     verticalScore(i, j, -1, board)+
                     downtopDiagonalScore(i, j, -1, board))>=max1) {
                        max1 = horizontalScore(i, j, -1, board)+
                        topdownDiagonalScore(i, j, -1, board)+
                        verticalScore(i, j, -1, board)+
                        downtopDiagonalScore(i, j, -1, board);
                    x=i;
                    y=j;

            }
        }
    }
    }
    for (int i=0; i<HEIGHT; i++) {
        for (int j=0; j<WIDTH; j++) {
            if (board[i][j]==0) {
                if (checkNeighbor(i, j, board)&&
                    (horizontalScore(i, j, 1, board)+
                     topdownDiagonalScore(i, j, 1, board)+
                     verticalScore(i, j, 1, board)+
                     downtopDiagonalScore(i, j, 1, board))>=max2) {
                    max2 = horizontalScore(i, j, 1, board)+
                        topdownDiagonalScore(i, j, 1, board)+
                        verticalScore(i, j, 1, board)+
                        downtopDiagonalScore(i, j, 1, board);
                    x2=i;
                    y2=j;


                }
            }
        }
    }
    if (max1>=max2)
    {
        return Point(x,y);
    }else{
        return Point(x2,y2);
    }
  }

}
