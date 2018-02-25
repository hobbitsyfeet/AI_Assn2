#include <iostream>
#include "Board.h"
#include "Tree.h"
using namespace std;

int main(){
Board Connect4;
int count = 0;
/*
for (int i = 0; i < 7; i++) {
  for (int j = 0; j < 6; j++){
      count++;
      Connect4.place(count,i);
    }
}*/
//Connect4.display();
for (int i = 0; i < 8; i++) {
  for (int j = 0; j < 8; j++){
      //count++;
      std::cout<<Connect4.checkEdge(Connect4.getCell(i,j))<<" ";
    }
    cout<< endl;
}

/*
Connect4.place(2,1);
Connect4.place(2,1);
Connect4.place(2,1);
Connect4.place(2,2);
Connect4.place(2,3);
Connect4.place(2,4);

  //Connect4.place(2,4);
//  Connect4.place(1,1);
  Connect4.display();
  //Connect4.checkWinDiagonal();

//  int* tempPtr = &Connect4.grid[0][1];
//  cout<<Connect4.grid[5][1]<<endl;
//  cout<<Connect4.checkEdge(tempPtr);
  if(Connect4.checkWin()){
    cout<<"YOU WIN";
  }
*/
//Tree testTree(1);

}
