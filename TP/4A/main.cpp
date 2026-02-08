#include <iostream>
#include <string>
using namespace std;

struct Shape {
    double Width;
    double Height;
    string getName() {
        return "Shape";
    }
    double getBox() {
        return Width*Height;
    }
};

int main() {
    Shape sh1, sh2;
    sh2.Width = 2;
    sh2.Height = 2;

    cout << sh1.getName() << ": " << sh1.Width << "x" << sh1.Height << " = " << sh1.getBox() << endl;
    cout << sh2.getName() << ": " << sh2.Width << "x" << sh2.Height << " = " << sh2.getBox() << endl;

    sh2.Width *= 2;
    cout << sh2.getName() << ": " << sh2.Width << "x" << sh2.Height << " = " << sh2.getBox() << endl;

    return 0;
}
