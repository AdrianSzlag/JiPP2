
#include <string>
#include <iostream>

using namespace std;

class Figure {
public:
    Figure(){};
    virtual float GetArea() = 0;
};

class Rectangle : public Figure{
protected:
    float a,b;
public:
    Rectangle(float a, float b):a(a),b(b){};
    float GetArea(){
        return a*b;
    }
    float GetPerimeter(){
        return 2.0*a+2.0*b;
    }
};

class Circle : public Figure{
protected:
    float r;
public:
    Circle(float r):r(r){};
    float GetArea(){
        return r*r*3.14;
    }
    float GetPerimeter(){
        return 2.0*r*3.14;
    }
};


int main(){
    Figure *circle = new Circle(5);
    Figure *rectangle = new Rectangle(5, 18);
    cout << "Circle area: " << circle->GetArea() << endl;
    cout << "Rectangle area: " << rectangle->GetArea() << endl;

    return 0;
}