#include <iostream>
#include <string>
using namespace std;

class Shape {
public:
  Shape(double width = 1, double height = 1) {
    Width = width;
    Height = height;
  }
  string getName() { return "Shape"; }
  double getBox() { return Width * Height; }

private:
  double Width;
  double Height;
};

int main() {
  Shape sh1(1);
  cout << sh1.getName() << ": " << sh1.getBox() << endl;
  return 0;
}
