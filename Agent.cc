
#include "Agent.h"
#include "Board.h"

Agent::Agent(){
  maxDepth = 42; //7*6 is total number of returns
  depth = 0;     // how far in the tree traveled
}


int Agent::maximum(Board &board, int turn, int &alpha, int &beta, bool maximizing){
  if(maxDepth < depth){
    return 0;
  }
  vector<int> values(7); //vector for winning values if placed in column

  if(turn > depth){
    depth = turn;
  }

  for(int col = 0; col < 7; col++){
    //don't play on full column
    if (board.checkFull(col)) {
      continue;
    }

    for(int row = 0; row < 6; row++){
      if(board.getCell(row,col)==0){
        int checkWin = board.checkWin();
        if(checkWin == 1 && maximizing == true){
          return 1;
        }
        else{
          Board tempBoard = board;
          if(maximizing){
            board.place(1,col);
          }
          else{board.place(2,col);}
          int v = minimum(board,turn+1,alpha,beta);
          board


        }

      }
    }

  }

}

int Agent::minimum(Board &board, int turn, int &alpha, int &beta, bool maximizing){}
