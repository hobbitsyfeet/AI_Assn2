#include "Tree.h"
//#include "Board.h"
#include <iostream>
#include <cassert>
#include <stack>
#include <vector>
//Note: start player should only be 1 or 2



Tree::Tree(node* root)
{
	if (root == 0){
 		Board gameState; // start with a blank board
  	//create root foundation
  	this->root = new node; //create a new root
  	this->root->previous = 0; //root's previous state is null
  	this->root->state = gameState;  //push blank state to root of state Tree
	}
	else{
		this->root = root;
	}
}//end Constructor


node* Tree::getRoot(){
	return this->root;
}
node* Tree::getChild(node* currentNode,int childNum){
	if(childNum < currentNode->next.size()){
		return currentNode->next[childNum];
	}
	return 0; //returns null if no next children are found
};

int Tree::getChildSize(node* currentNode){
	return currentNode->next.size();
}
node* Tree::getParent(node* currentNode){
	return currentNode->previous;
}

void Tree::setSubtree(node *currentNode){
	for(int childCount = 0; childCount < getChildSize(currentNode); childCount++){
		if(getChild(currentNode,childCount) != root){
			destroyTree(getChild(currentNode,childCount));
		}
		//if current child is what we want, it to the new root
		else{
			this->root = currentNode;
		}//end else
	}//end for
}//end setSubtree

void Tree::destroyTree(node* currentNode){
	if(getChildSize(currentNode) != 0){//if it has children
		//destroy all children
		for(int childCount = 0; childCount < getChildSize(currentNode); childCount++){
				destroyTree(getChild(currentNode,childCount));
			}
		}
	//else it is a leaf node, destroy it's root.
	else{
		delete this->root;
	}//end else
}//end destroyTree



void Tree::generate(int currentPlayer, node* &currentNode,int depth){
	//generate up to a winning condition OR depth specified
  if((depth == 0) || (currentNode->state.checkWin() == 1) || (currentNode->state.checkWin() == 2)){
    return;
  }

  //create new node
  node* tempPtr = currentNode;

  currentNode = new node;
	currentNode->previous = tempPtr;

	//generate State
int number = 0;
for(int count = 0; count < 7; count ++){
      Board tempBoard = currentNode->previous->state;

      if(!tempBoard.checkFull(count)){

        tempBoard.place(currentPlayer%2+1,count);
				//tempBoard.display();
        currentNode->state = tempBoard;
				//currentNode->state.display();
        currentNode->previous->next.push_back(currentNode);
				//currentNode->previous->next[count]->state.display();


        number ++;
      }
  }
	//generate(currentPlayer,currentNode, depth-1);
}
void Tree::display(node* currentNode){
	node* tempPtr;
	currentNode->state.display();
	if(getChildSize(currentNode) == 0){
		return;
	}
		std::cout<<"\n";

		for(int childCount = 0; childCount < getChildSize(currentNode); childCount++){
			tempPtr = getChild(currentNode,childCount);
			display(tempPtr);
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
//}

//Tree::
