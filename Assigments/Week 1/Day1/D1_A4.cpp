/*Write a Function that calculate the Fibonacci series using recursive method. The Fibonacci Series :
0,1,1,2,3,5,8,13,21,...*/

#include <iostream>

using namespace std;
     
int Fibonacci(int n);
     
int main(){
    int n, j = 0;

    cout << "Please, introduce a number: " ;
    cin >> n;
     
    cout << endl << "Fibonacci series: ";
     
    for (int i = 1 ; i <= n ; i++ ){
        cout << Fibonacci(j) << " ";
        j++; 
    }
    cout << endl << endl; 
    return 0;
}
     
int Fibonacci(int n){
    if (n == 0){
        return 0;
    }else if (n == 1){
        return 1;
    }else{
        return (Fibonacci(n-1) + Fibonacci(n-2));
    }
}
     

