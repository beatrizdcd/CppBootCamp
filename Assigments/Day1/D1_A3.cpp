/* Write a program to return an array containing the values between two 8-bits unsigned integers IN DESCENDING
ORDER EXCLUSIVE. The function takes 2 values (LowerValue and UpperValue), it shall determine the values in
between, and then arrange the sequence in descending order excluding the upper and lower values.
If the LowerValue is greater than or equal the UpperValue, return an array of 2 elements, both containing value =
0xFF
Example:
Input: LowerValue=2 and UpperValue=5 Output:
Output Array=4,3 Output Array Size=2*/

#include <iostream> 
using namespace std; 
     
int main(){ 

    unsigned int LowerValue, UpperValue;
        
    cout << "Please, enter a number: ";
    cin >> LowerValue;
    cout << endl<<"Please, enter another number: ";
    cin >> UpperValue;
    
    if(UpperValue>LowerValue){
        cout << endl<<"Output Array: ";
        for(int i = UpperValue-1; i > LowerValue; i--){
            cout << i << " ";
        }
        int size = (UpperValue-1) - LowerValue;
        cout << endl << "Size of array: " << size;
    }else{
        cout <<endl<< "ERROR"; 
    }
    
    cout << endl<<endl;


    return 0; 
}


