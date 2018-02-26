#ifndef AGENT_H
#define AGENT_H

#include "Tree.h"

class Agent{
public:

	//int alphabeta(node root, int depth,int alpha, int beta, bool maximizingPlayer);
private:
	int depth;
	int max(Board currentBoard, int depth, int alpha, int beta){

	}
	int min(Board currentBoard, int depth, int alpha, int beta){}
	void generate(node root, int depth);// from current root, generate tree and search
};

#endif //AGENT_H
