#ifndef TREE_H
#define TREE_H

#include<vector>
#include"Board.h"

struct node
{
  Board state;
  node* previous; //pointer to previous node
  std::vector<node*> next; //vector of node pointers
};

class Tree
{
    public:
        Tree(int startPlayer);
        void generate(int currentPlayer, node* root, int depth);
        //Tree()
        //~btree();

        //void insert(int key);
        //node *search(int key);
        //void destroy_tree();

    private:
        //void destroy_tree(node *leaf);
        //void insert(int key, node *leaf);
        //node *search(int key, node *leaf);
        int counter = 0;
        node *root;
};

#endif //TREE_H
