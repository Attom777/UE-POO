#include <iostream>
#include <string>
using namespace std;

#define SetGetMacro(name, type)                                                \
  void set##name(type name) { this->name = name; }                             \
  type get##name() const { return this->name; }

#define GetMacro(name, type)                                                   \
  type get##name() const { return this->name; }                                \
                                                                               \
private:                                                                       \
  void set##name(type name);

class Shape {
public:
  Shape(double w = 0, double h = 0) : Width(w), Height(h) {}
  string getName() const { return "Shape"; }
  SetGetMacro(Width, double) SetGetMacro(Height, double) void Print() const {
    cout << getName() << ": " << Width << "x" << Height << " = "
         << Width * Height << endl;
  }
  void doSomething() const {
    // this method does not modify the state of the object
  }

private:
  double Width;
  double Height;
};

int main(int argc, char *argv[]) {
  Shape sh;
  sh.Print();

  sh.setWidth(2.0);  // This line will result in a compile-time error
  sh.setHeight(3.0); // This line will result in a compile-time error
  sh.doSomething();  // This line is allowed since the method is marked as const
  sh.Print();

  return 0;
}
