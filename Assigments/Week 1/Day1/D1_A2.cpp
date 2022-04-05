/* Write a program that use the selection sort algorithm to sort an integer array in ascending order (search for the
selection sorting algorithm). ((aray ex7))*/

#include <iostream>
using namespace std;

#define arr_size 5

int main(){
    
    int arr[arr_size];
    int aux, min;

    cout << "Please, enter five numbers: ";
    for(int i=0;i<arr_size;i++)
    {
      cin >> arr[i];
    }

    cout << "Array: " <<endl;
    for(int i=0; i<arr_size; i++){
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    for(int i = 0; i < arr_size; i++){
        min = i;
        for(int j = i+1; j < arr_size; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        aux = arr[i];
        arr[i] = arr[min];
        arr[min] = aux;
    }
   
    cout << "Array in ascending order: " << endl;
    for(int i=0; i<arr_size; i++){
        cout << arr[i] << " ";
    }
    cout << endl << endl;


    return 0;
}