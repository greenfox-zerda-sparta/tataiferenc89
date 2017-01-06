#include "Amoba.h"

using namespace std;

int main(int argc, char *argv[]) {
  Amoba amoba;
  GameEngine engine(&amoba,570,570);
  engine.run();
  amoba.test_coordinate();
  return 0;
}
