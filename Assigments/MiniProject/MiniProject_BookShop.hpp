#include <iostream>

using namespace std;

int const nBooks = 100;

class Book {
    public:
        string author, title, publisher;
        double price;
        unsigned int stock;

    public:
       // void printMenu();
        void newBook();
        void buyBook();
       // void searchBook(Book* b);
        void editBook();
        void exit();
        void printBook();
};


//CHOICE 1
void Book::newBook(){ 
    *bptr = new Book();
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
    *bptr++;
}

//CHOICE 2

void Book::buyBook(){
    int nBuy;

    cout<< endl << "- Enter Title Of Book:  ";
    getline(cin, title);
    cin.get();
    cout<<  "- Enter Author Of Book:  ";
    getline(cin, author);
    cin.get();
    cout<<  "- Enter Number Of Books to buy:  ";   
    cin >> nBuy;
    if(nBuy <= stock){
         cout<< endl << "Books Bought Sucessfully"<<endl;
         cout<< "Amount:  " << nBuy*price <<" €"<<endl<<endl;
    }else{
        cout<< endl << "Not enough books in our stock."<<endl;
        cout<< "Books in stock:  " << stock <<endl<<endl;
    }
    //printMenu ();
}

void Book::printBook(){   
    cout << "- Title Name:  "<< title << endl ;
    cout << "- Author Name:  "<< author << endl ;
    cout << "- Publisher Name:  "<< publisher << endl;
    cout << "- Price:  "<< price << endl;
    cout << "- Number of Copies:  "<< stock << endl<< endl;
}

//CHOICE 3
//void searchBook(Book* b){   //pass the pointer to the array 

/*
    if (titleSearch == title && authorSearch == author){
        cout<< endl << "Book Found Sucessfully"<<endl;
        printBook();
    }else{
        cout<< endl << "Book not found."<<endl<<endl;
    }
    */


//CHOICE 4
void Book::editBook(){
    string titleEdit, authorEdit;
    cout<< endl<< "- Enter Title Of Book: ";
    getline(cin, titleEdit);
    cout << "- Enter Author Of Book: ";
    getline(cin, authorEdit);

    if (titleEdit == title && authorEdit == author){
        cout<< endl << "Book Found Sucessfully"<<endl;
        cout<< "Please, enter the new information: "<<endl;
        newBook();
    }else{
        cout<< endl << "Book not found."<<endl<<endl;
    }
}