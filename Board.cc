#include "Board.h"

#include <iostream>
using namespace std;

Board::Board(){
grid.resize(6, vector<int>(7));
}

void Board::place(int chip, int col){
  //row
  for (int i = 0; i < grid.size(); i++) {
    //column
    for (int j = 0; j < grid[i].size(); j++){
      //if conditions are true, place chip
      // if we are on the bottom
      if(col == j &&(i == grid.size()-1 )){
        grid[i][j] = chip;
      }
      //if there is a chip below
      else if(col == j && (grid[i+1][j] !=0)) {
          grid[i][j] = chip;
        }//end else if
      }//end for j
  }//end for i
}//end place()


bool Board::checkWin(){}

const std::vector<std::vector<int> > getState(){
  //return grid;
}


void Board::display(){
  for (int i = 0; i < grid.size(); i++) {
    for (int j = 0; j < grid[i].size(); j++){
        cout << grid[i][j] << " ";
      }
    cout <<i<< endl;
  }
}
