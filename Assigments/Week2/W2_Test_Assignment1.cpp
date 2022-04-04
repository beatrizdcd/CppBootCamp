#include <iostream>

const size_t SIZE = 10;

int function() {
    return std::rand();
}
// MUST FILL THE ARRAY FRON THE LAST INDEX
int *fillArray() {
    static int a[SIZE];  // static allows to keep values after the function end
    size_t i = SIZE;// YOU ARE NOT SUPPOSE TO CHANGE THIS    
    for (i = SIZE; i >0; i--) {
        a[i-1] = function();        
    }
    return a;    
}
void printArray(int *a) {   // pointer to an array       
    for (size_t i = 0; i < SIZE; i++) {
        std::cout << *(a+i) << std::endl;
    }    
}

void printBool (bool _b) {


    if (_b == true) {  // double = is needed to make it equal
        std::cout << "VALUE is TRUE" << std::endl;        
    }else if (_b == false) {
        std::cout << "VALUE is FALSE" << std::endl;        
    }    
}
// YOU ARE NOT ALLOWED TO CHANGE THE RETURN TYPE
void resizeForMe(char *a, size_t _newSize) {
    a = new char[_newSize];
    delete [] a;
}

// YOU SHALL NOT CHANGE THE MAIN FUNCTION
int main() {
    printArray(fillArray());
    printBool(false);
    char *a = new char[SIZE];        
    for (size_t i = 0; i<SIZE; i++) i%2 ? a[i] = 'A' : a[i] = 'D';    
    std::cout << "Size is: " << a << std::endl;
    resizeForMe(a,100);
    for (size_t i = 0; i<1000; i++) i%2 ? a[i] = 'B' : a[i] = 'C';
    std::cout << "Size is: " << a << std::endl;
    return 0;
}

