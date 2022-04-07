/*
We want to generate 1024 random integers, then given a new random number; find two integers which are the
closest to the given number (smaller, and bigger) with less than twelve lookups.
*/


#include <iostream>
#include <algorithm>  // for lower_bound, upper_bound and sort
#include <vector>  // for vector

using namespace std;


int randomN() {
    return rand();
}

int main (){
    int size = 1024;
    int givenN = randomN();
    vector<int> vrandom;

    //Generate random data
    for (int i = 1; i <= size; i++) {
        vrandom.push_back(randomN());       
    }

    //Add a random number to the current data
    vrandom.push_back(givenN);

    //Sort the data
    sort(vrandom.begin(), vrandom.end());

    // create am iterator to search smaller and bigger number closest to the given one
    vector<int>::iterator smallerN, biggerN;
        smallerN = lower_bound(vrandom.begin(), vrandom.end(), givenN);
        biggerN = upper_bound(vrandom.begin(), vrandom.end(), givenN);

    
    cout <<"Print random given number: " << givenN;
    cout << endl<<endl;

    cout <<"Print Smaller Number closest to given Number: " << *(smallerN-1);
    cout << endl<<endl;

    cout <<"Print Bigger Number closest to given Number: " << *biggerN;
    cout << endl<<endl;

    return 0;
}

    // Print values if you want it
    /*
    cout << "Output of begin and end: " << endl;
    for (auto it = vrandom.begin(); it != vrandom.end(); ++it)
        cout << *it << " ";
    cout << endl<<endl;
    */