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
    int x; 
  
    Shape () {}

};

template <class T1,class T2>
void compare(const T1 &a, const T2 &b) { 
     if (a.area == b.area && a.perimeter == b.perimeter){
            std::cout << "Both shapes are equal. ";

        }else if (a.area > b.area) {
            std::cout << "Shapes are not equal. "  ;
        }else if (a.area < b.area){
            std::cout << "Shapes are not equal. "  ;
        }
}

class Circle: public Shape {
public:
   Circle(int r){
   area = M_PI * pow(r,2);  
   perimeter = 2*M_PI * r;
   }

};

class Triangle:  public Shape {
public:
    Triangle(int side1, int side2, int side3, int height){
    area = side1 * height / 2;
    perimeter = side1+side2+side3;
   } 
};

class Rectangle: public Shape {
public:
    Rectangle(){}
    Rectangle(int side1, int side2) {
    area = side1 * side2;
    perimeter = 2*side1 + 2*side2;
    }

};

class Square: public Rectangle{
public:
    Square(int side){
    area = pow(side,2);
    perimeter = 4*side;
   }  

};


int main() {
    Circle c1{4};
    Circle c2{2};
 
    Triangle t1{3, 4, 6, 1};  
    Triangle t2{1, 6, 1, 3};

    Rectangle r1{2, 5};
    Rectangle r2{5, 2};

    Square sq1{3};
    Square sq2{6};


    compare<Rectangle,Rectangle>(r1, r2);
    cout << endl;
    compare<Circle,Triangle>(c1, t2);
    cout << endl;
    compare<Square,Triangle>(sq2, t1);
    cout << endl;


    
    return 0;

}