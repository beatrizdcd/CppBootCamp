/*
Create a Stack container.
Stack container -> LIFO (First In First Out)

*/

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
    
    stack<int, vector<int>> stackContainer;
    stackContainer.push(12);
    stackContainer.push(18);
    stackContainer.push(6);
    stackContainer.pop();
    stackContainer.push(20);
    stackContainer.push(54);



    cout << "Size of container: " << stackContainer.size()<<endl<<endl;

    cout << "Stack Container: ";
    while (!stackContainer.empty()) {
        cout << ' ' << stackContainer.top();
        stackContainer.pop();
    }
    cout << endl;

    cout << "Size of container: " << stackContainer.size()<<endl<<endl;




    return 0;
}