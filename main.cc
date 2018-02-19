#include <iostream>
#include "Board.h"
using namespace std;

int main(){
Board Connect4;
  Connect4.place(2,0);
  Connect4.place(2,0);
  Connect4.place(2,0);
  Connect4.place(2,0);

  Connect4.place(1,1);
  Connect4.display();
}
