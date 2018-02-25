#ifndef BOARD_H
#define BOARD_H

#include <vector>

class Board{
public:
Board();
Board(const &Board);

void place(int chip,int col);
bool checkFull(int col);
int checkWinHorizontal();
int checkWinVertical();
int checkWinDiagonal();
int checkWin();
bool checkEdge(int* currentNode);
int* getCell(int row, int col);
const std::vector<std::vector<int> > getState();

void display();
  std::vector<std::vector<int> > grid;

private:

};


#endif //Board
