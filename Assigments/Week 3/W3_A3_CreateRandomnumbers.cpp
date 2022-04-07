/*
Generate random numbers between 0-33, ten thousand times, then print how many duplicates of each number
you have generated -- print in ascending order.
*/

#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main(){
    int size = 10000;
    int min = 0;
    int max = 33;
    int randint(int, int), i;
    vector<int> vrandom;

    //creating a random data with values between 0 and 33
    for (i = 1; i <= size; i++){
        vrandom.push_back(randint(min,max));
    }

    //sort the data
    sort(vrandom.begin(), vrandom.end());

    // counting duplicate numbers in the vector
     for (i = min;i <= max;i++){
        int totalCount = count (vrandom.begin(), vrandom.end(), i);
        cout << "Number " << i << " has " << totalCount  << " duplicates.\n";
   }

    cout << endl<<endl;

    return 0;
}

int randint(int min, int max) {
    return rand() % (max + 1 - min) + min;
}