/* Write a program that use the bubble sort algorithm to sort an integer array in ascending order (search for the
bubble sorting algorithm).*/

/*   ASK THE USER TO ENTER AN ARRAY*/

#include <iostream>
using namespace std;

#define arr_size 5

int main(){
    
    int arr[arr_size];
    int aux;

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
        for(int j = 0; j < arr_size-i-1; j++){
            if(arr[j] > arr[j+1]){
                aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
            }
        }
    }
   
    cout << "Array in ascending order: " << endl;
    for(int i=0; i<arr_size; i++){
        cout << arr[i] << " ";
    }
    cout << endl << endl;


    return 0;
}