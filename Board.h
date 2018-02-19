#ifndef BOARD_H
#define BOARD_H

#include <vector>

class Board{
public:
Board();

void place(int chip,int col);
bool colFull(int col);
bool checkWin();

const std::vector<std::vector<int> > getState();

void display();
private:
  std::vector<std::vector<int> > grid;
};


#endif //Board
