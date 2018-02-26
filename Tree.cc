#include "Tree.h"

Tree::Tree(){
	Board newState;
	root.state = newState;
	root.parent = 0;
}

Tree::generate(int currentPlayer, int depth, node currentNode){
	node tempNode;
	for(int i = 0; i < 7; i++){
		if(!currentNode.state.checkFull(i)){

		}
	}
}

/*

Tree::Tree(){
	Board newState;
	root = new node;
	root->state = newState;
	root->parent = 0;
	root->firstChild = 0;
	root->sibling = 0;
}

node* node::addChild(){
	if(firstChild == 0){
		firstChild = new node;
		firstChild->parent = this;
		firstChild->state = this->state;
		firstChild->sibling = 0;
		return firstChild;
	}
	/*
	else{
	//create a pointer to first child
	node* childPtr = firstChild;
	//iterate until last child
		while(childPtr->sibling != 0){
			childPtr = childPtr->sibling;
		}
	childPtr->sibling = new node;
	childPtr->sibling->state = parent->state;
	childPtr->sibling->sibling = 0;
	return childPtr->sibling;
}
}

node* node::getChild( int child){
	node* childPtr = firstChild;
	for(int count = 0; count <= child; count++){
		childPtr = childPtr->sibling;
	}
	return childPtr;
}

node* Tree::getRoot(){
	return this->root;
}
void Tree::generate(int currentPlayer, node* currentNode, int depth){
			currentNode->addChild();
	for(int count = 0; count < 7; count ++){


	      //Board tempBoard = currentNode->parent->state;

	      //if(!tempBoard.checkFull(count)){
					//addChild(currentNode);
				//}
	  }
		//generate(currentPlayer,currentNode, depth-1);
}
*/
