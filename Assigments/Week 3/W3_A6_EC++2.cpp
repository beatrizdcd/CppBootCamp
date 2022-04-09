/*
Write a function which can encode the information in the given figure:
• Speed / 20 (So 1=20km/h, 2=40km/h,...)
• Distance / 150 (So 1=150mm, 2=300mm,...)
It is a trade off between memory usage and accuracy.
unit16_t
1011 (Speed)
101 (Front)
001 (Rear)
011 (Right)
011 (Left)
*/

#include <iostream>
#include <bitset>

using namespace std;

int main(){
    uint16_t speed, dFront, dRear, dRight, dLeft;

    cout << "Please, introduce speed (km/h): ";
    cin >> speed;
    cout << "Please, introduce front distance (mm): ";
    cin >> dFront;
    cout << "Please, introduce rear distance (mm): ";
    cin >> dRear;
    cout << "Please, introduce right distance (mm): ";
    cin >> dRight;
    cout << "Please, introduce left distance (mm): ";
    cin >> dLeft;

    bitset<16> bitSpeed((speed/=20)<< 12);
    bitset<16> bitFront((dFront/=150)<< 9);
    bitset<16> bitRear((dRear/=150)<< 6);
    bitset<16> bitRight((dRight/=150)<< 3);
    bitset<16> bitLeft(dLeft/=150);

    cout << "\nInformation:  " << bitset<16> (bitSpeed | bitFront | bitRear | bitRight | bitLeft) << endl<<endl;

    return 0;
}
