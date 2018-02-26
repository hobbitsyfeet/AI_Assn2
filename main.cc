#include <iostream>
#include "Board.h"
//#include "Tree.h"
using namespace std;

int main(){
  Board Connect4;
  Connect4.place(2,0);
  Connect4.place(1,0);
  Connect4.place(5,0);
  Connect4.place(2,0);
  Connect4.place(1,0);
  //Connect4.place(2,0);

  Connect4.place(1,1);
  Connect4.place(9,1);
  Connect4.place(1,1);
  Connect4.place(2,1);
  //Connect4.place(2,1);

  Connect4.place(2,2);
  Connect4.place(1,2);
  Connect4.place(6,2);
  Connect4.place(2,2);

  Connect4.place(1,3);
  Connect4.place(2,3);
  Connect4.place(8,3);
  Connect4.place(2,3);

  Connect4.place(1,4);
  Connect4.place(3,4);
  Connect4.place(2,4);

  Connect4.place(2,5);

  //Connect4.checkWinDiagonal();
  /*
  int count = 0;
  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 6; j++){
        count++;
        Connect4.place(count,i);
      }
  }*/
  Connect4.display();
/*
Tree states;

node** tmpPtr = &states.root;
states.root->addChild();
tmpPtr = (&(states.root->getChild(0)));
*/
//tmpPtr->state.display();

//tmpPtr->state.display();


//tmpPtr->state.display();
//Tree C4tree(0);
//C4tree.generate(2,C4tree.getRoot(),1);
//C4tree.getRoot()->next[3]->state.display();
//(C4tree.getRoot(),0)->state.display();
//C4tree.display(C4tree.getRoot());
//std::cout<<C4tree.getChildSize();
//C4tree.display();
//C4tree.getRoot()->state.display();
//node* tempPtr = C4tree.getChild(2);
//tempPtr->state.display();


//C4tree.display(C4tree.getRoot());
/*

//Connect4.display();
/*
for (int i = 0; i < 8; i++) {
  for (int j = 0; j < 8; j++){
      //count++;
      std::cout<<Connect4.checkEdge(Connect4.getCell(i,j))<<" ";
    }
    cout<< endl;
}*/

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
