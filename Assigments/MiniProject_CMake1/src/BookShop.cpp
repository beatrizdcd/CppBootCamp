#ifndef MYLIB_H1
#define MYLIB_H1

#include "BookShop.h"

#include <iostream>

using namespace std;

const int nBooks = 100;  
Book *bookPtr[nBooks];   // array of pointers to book
int s = 0;    // number of books
int choice;


void chooseOption(){

    while(choice !=5){
        printMenu ();
        switch (choice) {
            case 1:
                bookPtr[s] = new Book;
                bookPtr[s]->addBook();
                s++;  //count new boo
                break;
            case 2:
                buyBook();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                editBook();
                break;
            case 5:
            cout<< endl << "Bye." << endl;
                for (int i = 0; i < nBooks; i++)
                {
                    delete bookPtr[i];
                }
                choice = 5;
                break;
            default:
                cout << "Choice not valid." << endl;
            break;
     }
    }  
}

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

void Book::printBook(){   
    cout << "- Title Name:  "<< title << endl ;
    cout << "- Author Name:  "<< author << endl ;
    cout << "- Publisher Name:  "<< publisher << endl;
    cout << "- Price:  "<< price << endl;
    cout << "- Number of Copies:  "<< stock << endl<< endl;
}

//CHOICE 2
void buyBook(){
    int nBuy;
    int count = 0;
    string searchTitle, searchAuthor;
    cout<< endl << "- Enter Title of Book:  ";
    getline(cin, searchTitle);
    cout<<  "- Enter Author of Book:  ";
    getline(cin, searchAuthor);

    for (int i = 0; i < s ;i++){
        if(searchTitle == bookPtr[i]->title && searchAuthor == bookPtr[i]->author){
            cout<< endl << "Book Found Sucessfully!"<<endl<<endl;
             count++;
            cout<<  "- Enter Number of Books to buy:  ";   
            cin >> nBuy;
            if(nBuy <= bookPtr[i]->stock){
                cout<< endl << "Thanks for your purchase!"<<endl;
                cout<< "Amount:  " << nBuy*(bookPtr[i]->price) <<" €"<<endl<<endl;
                bookPtr[i]->stock -= nBuy;
            }else{
                cout<< endl << "Not enough books in our stock."<<endl;
                cout<< "Books in stock:  " << bookPtr[i]->stock <<endl<<endl;
            }
        }
    }
    if (count ==0){
        cout<< endl << "Book not found."<<endl<<endl;
    }
}

//CHOICE 3
void searchBook(){   
    string searchTitle, searchAuthor;
    int count = 0;
    cout<< endl << "- Enter Title of Book:  ";
    getline(cin, searchTitle);
    cout<<  "- Enter Author of Book:  ";
    getline(cin, searchAuthor);

    for (int i = 0; i < s ;i++){
        if (searchTitle == bookPtr[i]->title && searchAuthor == bookPtr[i]->author){
            cout<< endl << "Book Found Sucessfully"<<endl;
            cout << "BOOK INFORMATION: "<<endl;
            bookPtr[i]->printBook();
            count++;
        }
    }
    if (count == 0){
        cout<< endl << "Book not found."<<endl<<endl;
    }
}

//CHOICE 4
void editBook(){
    int count = 0;
    string titleEdit, authorEdit;
    cout<< endl<< "- Enter Title of Book: ";
    getline(cin, titleEdit);
    cout << "- Enter Author of Book: ";
    getline(cin, authorEdit);

    for (int i = 0; i < s ;i++){
        if (titleEdit == bookPtr[i]->title && authorEdit == bookPtr[i]->author){
            cout<< endl << "Book Found Sucessfully!"<<endl<<endl;
            bookPtr[i] = new Book;
            cout<< "Please, enter the new information: "<<endl;
            bookPtr[i]->addBook();
            count++;
        }
    }
    if (count == 0){
        cout<< endl << "Book not found."<<endl<<endl;
    }
}

#endif