#ifndef TREE_H
#define TREE_H

#include<vector>
#include"Board.h"

struct node
{
  Board state;
	vector<node> children;
	node* parent;

	/*
  node* parent; //pointer to previous node
  node* firstChild;
	node* sibling;
	node* addChild();
	node* getChild(int child);
	//deleteNode();*/
};

class Tree{
    public:
        Tree();
				generate(int currentPlayer, int depth, node currentNode);

				/*
				node* getRoot();
				void generate(int currentPlayer, node* currentNode, int depth);
				*/
				//void Insert(node);
				/*
        void generate(int currentPlayer, node* &currentNode, int depth);
				void setSubtree(node *root); // clears any node that isn't this root or it
				//node* getRoot();
				node* getParent(node* currentNode);
				node* getChild(node* currentNode,int childNum);
				int getChildSize(node* currentNode);
				//Board getState();
				void destroyTree(node* currentNode);
				void display(node* currentNode);
				*/
        //Tree()
        //~btree();

        //void insert(int key);
        //node *search(int key);
        //void destroy_tree();
				node root;
    private:
        //int counter = 0;

};

#endif //TREE_H
