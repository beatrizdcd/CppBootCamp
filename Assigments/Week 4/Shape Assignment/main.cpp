
#include "Shape.h"

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