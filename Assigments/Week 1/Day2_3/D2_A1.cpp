/*Write a program that removes the repeated number of an input sorted array and return a new array without
the repeated numbers. The function shall return error if the size of the input array is ZERO. The function takes
four inputs:
a. Old array.
b. Old array size.
c. New array (empty array).
d. The size of the new array after fill it in the function.
int removeDuplicates(int arr_old[], int n_old, int arr_new[], int *n_new)
Example:
arr1 = {1,2,3,3,3,4,4,5,5,5} arr2 = {1,2,3,4,5}*/

#include <iostream>

using namespace std;

int removeDuplicates(int arr_old[], int n_old);

int main(){
    int arr1[] = {1,1,2,3,3,3,4,4,5};
    int n = (sizeof(arr1)/sizeof(arr1[0]));

    cout << "a. Array: ";
    for (int i=0; i<n; i++)
        cout << arr1[i] << " ";
        cout << endl;

    cout << "b. Size of array: " << n <<endl<<endl;


    int n_new = removeDuplicates(arr1, n);

    cout << "c. New Array: ";
    for (int i=0; i<n_new; i++)
        cout << arr1[i] << " ";
        cout << endl;

    cout << "d. Size of new array: " << n_new <<endl<<endl;

return 0;
}

int removeDuplicates(int arr_old[], int n_old){

    if (n_old == 0 || n_old == 1)
    return n_old;
  
    int j = 0;

    for (int i=0; i<n_old-1; i++){
        if (arr_old[i] != arr_old[i+1]){
        arr_old[j] = arr_old[i];
        j++;
        } 
    arr_old[j] = arr_old[n_old-1];
    }

    return j;     
}


