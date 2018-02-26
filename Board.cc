#include "Board.h"

#include <iostream>
using namespace std;

Board::Board(){
//basic, 7 column 6 row board
grid.resize(6, vector<int>(7));
/*row-> col */
/*row->  |  */
/*row->  v  */

}
Board::Board(const &Board){
  this->grid = grid;
}


void Board::place(int chip, int column){
  //row
  for (int row = 0; row < grid.size(); row++) {
    //column
    for (int col = 0; col < grid[row].size(); col++){
      //if conditions are true, place chip
      // if we are on the bottom
      if(column == col &&(row == grid.size()-1 )){
        grid[row][col] = chip;
        return;
      }
      //if there is a chip below
      else if(column == col && (grid[row+1][col] !=0)) {
          grid[row][col] = chip;
          return;
      }//end else if
    }//end for col
  }//end for row
}//end place()

int Board::checkWin(){
  //note: returns winner, if no winner, return 0
  int horizontal = checkWinHorizontal();
  int vertical = checkWinVertical();
  //int diagonal = checkWinDiagonal();

  // if any of these are not 0, winner is returned

  if(horizontal != 0){
    return horizontal;
  }
  else if(vertical != 0){
    return vertical;
  }
//  else if(diagonal != 0){
//    return diagonal;
//  }
  //no one won, win is 0.
  else{
    return 0;
  }
}

int Board::checkWinHorizontal(){
  //cout<<"CHECKING horizontal\n";
  int count = 0; //how many have counted in a row
  int currentCount; //which number (1 or 2) currently counting for

  // Count horizontal Lines
  for (int row = 0; row < grid.size(); row++) {
    for (int col = 0; col < grid[row].size(); col++){
      //count = 0;
      //if 0 is encountered, reset count
      if(grid[row][col] == 0){
        currentCount = 0;
        count = 0;
      }
      else{
        //count increases
        if(currentCount == grid[row][col]){
            count++;
            //cout<<"Incrementing count of "<<currentCount<<" to "<<count<<endl;
        }
        //current grid cell != currentCount number
        else{
            //cout<<"current count set to " << grid[row][col]<<endl;
            currentCount = grid[row][col];
            count = 1;
        }//end else if count increase
      }//end else (cell != 0)

      //check win
      if(count == 4){
        //cout<<count<<" IN A ROW\n";
        return currentCount;
      }//end if connect 4
    }//end for col
  }//end for row
  return 0;
}

//function is identical to horizontal but traverses in a transposed matrix
int Board::checkWinVertical(){
    //cout<<"CHECKING vertical\n";
  int count = 0; //how many have counted in a row
  int currentCount; //which number (1 or 2) currently counting for

  for (int row = 0; row < grid[0].size(); row++) {

    for (int col = 0; col < grid.size(); col++){
    //count = 0;
      //if 0 is encountered, reset count
      if(grid[col][row] == 0){
        currentCount = 0;
        count = 0;
      }
      else{
        //count increases
        if(currentCount == grid[col][row]){
            count++;
            //cout<<"Incrementing count of "<<currentCount<<" to "<<count<<endl;
        }
        //current grid cell != currentCount number
        else{
            //cout<<"current count set to " << grid[col][row]<<endl;
            currentCount = grid[col][row];
            count = 1;
        }//end else if count increase
      }//end else (cell != 0)

      //check win
      if(count == 4){
        //cout<<count<<" IN A ROW\n";
        return currentCount;
      }//end if connect 4
    }//end for col
  //  count = 0;
  }//end for row
  return 0;
}

/*
int Board::checkWinDiagonal(){
  //cout<<"CHECKING diagonal\n";
  int count = 0; //how many have counted in a row
  int currentCount = 0; //which number (1 or 2) currently counting for

  //columns 3 to 5, row 0

  for(int col = 3; col < 6; col++){
      int diagonalCount = 0;
      int row = 0;
      bool lastRow = false;
      int tempCol = col;

      //while(diagonalCount != col+1){

      while((&grid[row][tempCol] != & grid[5][tempCol])&&(&grid[row][tempCol] != & grid[col][0]) || (lastRow == true)){
        //DO CHECK
        cout<<grid[5][tempCol];
        if(grid[row][tempCol] == 0){
          currentCount = 0;
          count = 0;
        }
        else{
          //count increases
          if(currentCount == grid[row][tempCol]){
              count++;
              cout<<"Incrementing count of "<<currentCount<<" to "<<count<<endl;
          }
          //current grid cell != currentCount number
          else{
              cout<<"current count set to " << grid[row][tempCol]<<endl;
              currentCount = grid[row][tempCol];
              count = 1;
          }//end else if count increase
        }//end else (cell != 0)

        //check win
        if(count == 4){
          //cout<<count<<" IN A ROW\n";
          return currentCount;
        }//end if connect 4

        //if we are on the last row, do not increment (prevent segfault)
        if(&grid[row][tempCol] == &grid[col][0]){break;cout<<endl;}
        //cout<<grid[row][tempCol];
          row++;
          tempCol--;
        //diagonalCount++;
        //if we are on last row, mark true to do one more iteration
        if(&grid[row+1][tempCol-1] == &grid[col][0] ){lastRow=true;}

        //if(lastRow == true){break;}
        //if we have done last row, do not go any further.
      }//end while
    }


  }//end col 3-6
/*
  for(int row = 0; row < 8; row++){
    //int diagonalCount = 0;
    int col = 0;
    int tempRow = row;
    bool lastRow = false;
            //cout<<"Ending at"<<grid[5][tempRow]<<endl;
      while((row < 3)&&(&grid[tempRow][row] != & grid[5][col]) || (lastRow == true)){
        //cout<<grid[tempRow][col]<<',';
        //if we are on the last row, do not increment (prevent segfault)
        if(&grid[tempRow][col] == &grid[5][col]){break;cout<<endl;}
        col++;
        tempRow++;
        //if we are on last row, mark true to do one more iteration
        if(&grid[tempRow+1][col+1] == &grid[5][col]){lastRow=true;}
        //diagonalCount++;
      }
      cout<<endl;
  }
*/
  //return 0;
//}



const std::vector<std::vector<int> > Board::getState(){
  return grid;
}

bool Board::checkFull(int col){
//  std::cout<<"POINT"<<grid[col][1];
    if(grid[0][col] == 0){
      return false;
    }
    return true;
}

void Board::display(){
  for (int i = 0; i < grid.size(); i++) {
    for (int j = 0; j < grid[i].size(); j++){
        cout << grid[i][j]<<" ";
      }
    cout<< endl;
  }
}

bool Board::checkEdge(int* currentNode){

    for(int i =0; i < 6; i++){
        int &tempNode = grid[0][i];
        int &tempNode1 = grid[i][0];//left edge
        int &tempNode2 = grid[i][6];//right edge
        int &tempNode3 = grid[5][i];//bottom edge
      if(currentNode == &tempNode1 || currentNode == &tempNode2 || currentNode == &tempNode3 || currentNode == &tempNode){
        return true;
      }
    }
    return false;
}

int Board::getCell(int row, int col){
  return grid[row][col];
}
