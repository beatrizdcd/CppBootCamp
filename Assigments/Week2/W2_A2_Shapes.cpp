/*
Implement an interface for shape, and derive circle, triangle, rectangle, square as children. Overload all three
comparison operators to compare the shapes based on their area -- if equal then their perimeter should be
considered. Only, and if only both area and perimeter are equal then the objects should be considered equal.
 */


#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    float perimeter;
    float area;   
  
    Shape () {}

    bool operator==(const Shape& s){
        if (this->area == s.area && this->perimeter == s.perimeter){
            std::cout << "Both shapes are equal. ";
        return true;

        }else{
            std::cout << "Shapes are not equal. "  ;
        return false;
        }
    
    }
   
    bool operator>(const Shape& s){
        if (this->area == s.area ){
        std::cout << "Shapes are equal. " << "";
        return true;
        }else{
              std::cout << "Shapes are not equal. " << "";
        return false;
        }
    }


    bool operator<(const Shape& s){
        if (this->area == s.area ){
        std::cout << "Shapes are not equal. " << "";
        return true;
        }else{
            std::cout << "Shapes are not equal. " << "";
        
        
        return false;
        }
    }
};

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


    std::cout << (r1 == r2) << "\n\n";
    std::cout << (sq2 == r2) << "\n\n";
    std::cout << (c1 < t2) << "\n\n";
    std::cout << (r1 == sq1) << "\n\n";
    std::cout << (sq1 > t2) << "\n\n";
    std::cout << (c2 == sq1) << "\n\n";
    std::cout << (t1 < c2) << "\n\n";
    std::cout << (r1 == t2) << "\n\n";
    std::cout << (t1 > r2) << "\n\n";
    std::cout << (sq1 > sq2) << "\n\n";


    
    return 0;

}