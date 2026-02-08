#include <iostream>
#include <string>
using namespace std;

#define SetGetMacro(name, type) \
    void set##name(type name) { \
        this->name = name; \
    } \
    type get##name() const { \
        return this->name; \
    }

#define GetMacro(name, type) \
    type get##name() const { \
        return this->name; \
    } \
    private: \
    void set##name(type name);

class Shape {
public:
    // Default constructor with default values for Width and Height
    Shape() : Width(1), Height(1) {}

    // Constructor with provided Width and Height values
    Shape(double w, double h) : Width(w), Height(h) {}

    string getName() const {
        return "Shape";
    }

    SetGetMacro(Width, double);
    SetGetMacro(Height, double);

    void Print() const {
        cout << getName() << ": " << Width << "x" << Height << " = " << Width * Height << endl;
    }

    void doSomething() const {
        // this method does not modify the state of the object
    }

private:
    double Width;
    double Height;
};

int main(int argc, char *argv[]) {
    Shape sh1;
    Shape sh2(2, 3);

    sh1.Print();
    sh2.Print();

    return 0;
}
