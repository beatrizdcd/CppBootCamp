/*
Implement a function that can read the information shown in the figure.
unit16_t
10111(Seat belts)
0100(Windows)
1011(Doors)
011(light)
*/

#include <iostream>
#include <bitset>


int main(){
     
    unsigned int long MASK5 = 0b1111100000000000, MASK4 = 0b0000011110000000, MASK3 = 0b0000000000000111, Data = 0b011011101001011011;

    std::cout << 
               // "Data: " << std::bitset<16>(Data) << std::endl<<
               // "MASK: " << std::bitset<16>(MASK5) << std::endl<<
                "Seat belts: " << std::bitset<5>((Data & MASK5) >> 11) << std::endl << std::endl;

    std::cout << 
                //"Data: " << std::bitset<16>(Data) << std::endl<<
                //"MASK: " << std::bitset<16>(MASK4) << std::endl<<
                "Windows: " << std::bitset<4>((Data & MASK4) >> 7) << std::endl << std::endl;

    std::cout << 
                //"Data: " << std::bitset<16>(Data) << std::endl<<
                //"MASK: " << std::bitset<16>(MASK4>>4) << std::endl<<
                "Doors: " << std::bitset<4>((Data & MASK4>>4) >> 3) << std::endl << std::endl;

     std::cout << 
               // "Data: " << std::bitset<16>(Data) << std::endl<<
               // "Light: " << std::bitset<16>(MASK3) << std::endl<<
                "Seat belts: " << std::bitset<3>((Data & MASK3)) << std::endl << std::endl;

    return 0;
}