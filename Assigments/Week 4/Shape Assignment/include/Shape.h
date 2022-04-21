/*
Write a function template which receives two of any shapes from last week’s assignment, compares them, and
prints out the result.
*/

#include <iostream>
#include <cmath>
using namespace std;



class Shape {
public:
    float perimeter;
    float area;
  
    Shape () {}

};

template <class T1,class T2>
void compare(const T1 &a, const T2 &b);

class Circle: public Shape {
public:
   Circle(int r);

};

class Triangle:  public Shape {
public:
    Triangle(int side1, int side2, int side3, int height);
};

class Rectangle: public Shape {
public:
    Rectangle();
    Rectangle(int side1, int side2);
};

class Square: public Rectangle{
public:
    Square(int side);

};


