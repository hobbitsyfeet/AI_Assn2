//#include "Tree.h"
//#include "Board.h"
#include <iostream>
#include <cassert>
#include <stack>
#include <vector>
//Note: start player should only be 1 or 2


Tree::Tree(int startPlayer)
{
  assert(startPlayer == 1 || startPlayer == 2); //make sure current player is 1 or 2
  Board gameState; // start with a blank board
  //create root foundation
  root = new node; //create a new root
  root->previous = 0; //root's previous state is null
  root->state = gameState;  //push blank state to root of state Tree
  int currentPlayer = startPlayer;
  //helper variables
  //node* tempPrevPtr = root; //previous pointer is set to root for later new node


}//end Constructor

void Tree::generate(int currentPlayer, node* root,int depth){

  int numOptions = 7;
  int numOptionsComplete = 0;
  if(depth == 0 || (root->state.checkWin() == 1 || root->state.checkWin() == 2)){
    //root->state.display();
    //std::cout<<"\n";
    return;
  }
  //create new node
  node* tempPtr = root;
  root = new node;
  root->previous = tempPtr;

  //change player
  if(root->previous == 0){ // if we are currently on starting node ()
    if(currentPlayer == 2){currentPlayer = 1;}
    else{currentPlayer = 2;}
  }
int number = 0;
for(int count = 0; count < 7; count ++){
      //std::cout<< "\nNUM:numStates"<<count;
      Board tempBoard = root->previous->state;
      if(!tempBoard.checkFull(count)){

        tempBoard.place(currentPlayer,count);
        root->state = tempBoard;

        tempPtr->next.push_back(root);
        //root->state.display();
        //numOptionsComplete++;
        generate(currentPlayer,root, depth-1);
        number ++;
      }
  }
  /*
  root = new node;
  root->previous = tempPrevPtr; //assign current's previous
  tempPrevPtr = root;
  for(int playerOptions = 0; playerOptions < 7; playerOptions ++){
    //if(!root->state.checkFull(playerOptions)){
      //for every 7 possibilities per turn, create a new node
      root->state = root->previous->state;
      root->state.place(currentPlayer,playerOptions);
      root->previous->next.push_back(root); //previous's next is currently

      root->state.display();
      for(int count = 0; count < root->previous->next.size(); count++){
        generate(currentPlayer,root->previous->next[count],nextState);
      }
      //stateCount++; //increment stateCount
    //}
  }//end player Options
*/
}

//Tree::
