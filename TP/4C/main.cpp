#include <iostream>
#include <string>
using namespace std;

class Shape {
public:
    Shape(double width = 1, double height = 1) {
        Width = width;
        Height = height;
    }
    string getName() {
        return "Shape";
    }
    double getWidth() {
        return Width;
    }
    double getHeight() {
        return Height;
    }
    void setWidth(double width) {
        Width = width;
    }
    void setHeight(double height) {
        Height = height;
    }
    void Print() {
        cout << getName() << ": " << Width << "x" << Height << " = " << Width*Height << endl;
    }
private:
    double Width;
    double Height;
};

int main(int argc, char *argv[]) {
    Shape sh;
    sh.Print();
    sh.setWidth(sh.getWidth()*2);
    sh.Print();
    return 0;
}
