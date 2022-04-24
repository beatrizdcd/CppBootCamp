#include "ClassBook.h"

//CHOICE 1
void Book::addBook(){ 

    cout<< endl <<  "- Enter Title Name:  ";
    getline(cin, title);
    cout<< "- Enter Author Name:  ";
    getline(cin, author);
    cout<<  "- Enter Publisher Name:  ";
    getline(cin, publisher);
    cout<<  "- Enter Price:  ";

    // check that price typevariable is correct
    while (!(cin>>price)){
        cout<< "Not valid value. Please, enter a number.";
        cin.clear();
        cin.ignore();
    }
    cout<<  "- Enter Number of Copies:  ";
    while (!(cin>>stock)){
        cout<< "Not valid value. Please, enter a number.";
        cin.clear();
        cin.ignore();
    }
    cout <<endl;
}