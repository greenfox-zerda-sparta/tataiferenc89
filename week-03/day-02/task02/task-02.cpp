#include <string>
#include <iostream>

using namespace std;
// Write a function called "get_surface" that takes a RectangularCuboid
// and returns it's surface

// Write a function called "get_volume" that takes a RectangularCuboid
// and returns it's volume

struct RectangularCuboid {
  double a;
  double b;
  double c;
};
int cuboid_surface(RectangularCuboid cuboid){
  int surface=2*((cuboid.a * cuboid.b) + (cuboid.b * cuboid.c) + (cuboid.a * cuboid.c));
  return surface;
}
int cuboid_volume(RectangularCuboid cuboid){
  int volume=cuboid.a*cuboid.b*cuboid.c;
  return volume;
}
int main() {
  RectangularCuboid cuboid={5,6,7};
  cout << "Parameters of the cuboid is" << " a = " << cuboid.a << ", b = " <<cuboid.b << ", c = " << cuboid.c << endl;
  cout << "The surface of the cuboid is: " << cuboid_surface(cuboid) << endl;
  cout << "The volume of the cuboid is: " << cuboid_volume(cuboid);
  return 0;
}
