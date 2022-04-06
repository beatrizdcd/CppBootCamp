#include <iostream>
#include <cstdlib>
#include <set>

using namespace std;

int main(){
    int size = 10000;
    int min = 0;
    int max = 33;
    int randint(int, int), i;
    set<int> nrandom;

    for (i = 1; i <= size; i++){
        nrandom.insert(randint(min,max));
    }
  
    cout << "Output of begin and end: ";
    for (auto it = nrandom.begin(); it != nrandom.end(); ++it)
        cout << *it << " ";
  

    cout << endl<<endl;

    return 0;
}

int randint(int min, int max) {
    return rand() % (max + 1 - min) + min;
}