#ifndef AGENT_H
#define AGENT_H

#include "Board.h"

class Agent{
public:
	Agent();

	//int alphabeta(node root, int depth,int alpha, int beta, bool maximizingPlayer);
private:
	int maxDepth;
	int depth;
	int maximum(Board &currentBoard, int depth, int &alpha, int &beta, bool maximizing);
	int minimum(Board &currentBoard, int depth, int &alpha, int &beta, bool maximizing);

	//void generate(node root, int depth);// from current root, generate tree and search
};

#endif //AGENT_H
