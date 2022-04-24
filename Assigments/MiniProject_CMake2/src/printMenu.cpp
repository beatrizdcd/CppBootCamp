#include "BookShop.h"

void printMenu (){ // I sent the value of choice
    cout <<"      - MENU -"<<endl;
    cout <<"-----------------------"<<endl;
    cout<< "1. Entry of New Book"<<endl;
    cout<< "2. Buy Book"<<endl;
    cout<< "3. Search For Book"<<endl;
    cout<< "4. Edit Details Of Book"<<endl;
    cout<< "5. Exit"<<endl<<endl;
    cout<< "Enter your Choice: ";
    
    while (!(cin>>choice)){
        cout<< "Not valid value. Please, enter a number.";
        cin.clear();
        cin.ignore();
    }
}