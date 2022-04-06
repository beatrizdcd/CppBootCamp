/*
Generate random numbers between 0-33, ten thousand times, then print how many duplicates of each number
you have generated -- print in ascending order.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int size = 5;
    int min = 0;
    int max = 33;
    int randint(int, int), i;
    int randomN [size];

    cout << "Print random numbers between 0 and 33: " <<endl;
    for (i=0; i<size; i++){
        randomN[i] = randint(min,max);     //create a random nuber between 0 and 33
        cout << randomN[i] << ' ';
    }
    cout << endl<<endl;


    return 0;
}

int randint(int min, int max) {
    return rand() % (max + 1 - min) + min;
}
