/*You are designing a poster which prints out numbers with a unique style applied to each of them. The styling is
based on the number of closed paths or holes present in a giver number. The number of holes that each of the
digits from 0 to 9 have are equal to the number of closed paths in the digit. Their values are:
1, 2, 3, 5 and 7 = 0 holes.
0, 4, 6, and 9 = 1 hole.
8 = 2 holes.
Given a number, you must determine the sum of the number of holes for all of its digits. For example, the
number 819 has 3 holes.
Function Description
Complete the function countHoles. The function must return an integer denoting the total number of holes in
num. */

#include <iostream>

using namespace std;

int countHoles(int num, int holes[]);

int main() {
    int holes[] = { 1, 0, 0, 0, 1, 0, 1, 0, 2, 1 };
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << endl << "Number of holes in the number: " << countHoles(num,holes) <<endl<<endl;

    return 0;
}

int countHoles(int num, int holes[]){
    int totalHoles = 0;
    while (num > 0){
        int aux = num % 10;
        totalHoles = totalHoles + holes[aux];
        num = num / 10;
    }
    return totalHoles;
}