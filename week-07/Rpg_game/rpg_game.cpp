//============================================================================
// Name        : rpg_game.cpp
// Author      : Feri
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <ctime>
#include "MyGame.h"

int main(int argc, char* argv[]) {
  srand(time(0));
  MyGame game;
  GameEngine engine(&game, 700, 700);
  engine.run();
  return 0;
}

