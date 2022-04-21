/*A book shop maintains the inventory of books that are being sold at the shop. The list includes details such as
author, title, price, publisher and stock position. Whenever a customer wants a book, the sales person inputs
the title and author and the system searches the list and displays whether it is available or not. If it is not, an
appropriate message is displayed. If it is, then the system displays the book details and requests for the number
of copies required. If the requested copies book details and requests for the number of copies required. If the
requested copies are available, the total cost of the requested copies is displayed; otherwise the message
“Required copies not in stock” is displayed.
Design a system using a class called books with suitable member functions and Constructors. Use new operator
in constructors to allocate memory space required. Implement C++ program for the system.
*/

#include <iostream>
#include<string.h>

using namespace std;

class Book{
    public:
        string author, title, publisher;
        double price;
        unsigned int stock;
    public:
        Book(){
            author = "undefined";
            title = "undefined";
            publisher = "undefined";
            price = 0;
            stock = 0;
        }
        void addBook();
        void printBook();    
         ~Book(){
             cout << "destructor called"<< endl;
         }
};

const int nBooks = 100;  
Book *bookPtr[nBooks];   // array of pointers to book
int s = 0;    // number of books
int choice;

void printMenu();
void buyBook();
void searchBook();
void editBook();
void chooseOption();

int main(){

 chooseOption();
    
    return 0;
}

void chooseOption(){

    while(choice !=5){
        printMenu ();
        switch (choice) {
            case 1:
                bookPtr[s] = new Book;
                bookPtr[s]->addBook();
                s++;  //count new book
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
                for (int i = 0; i < s; i++)
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
    //cin >> choice;
    cin.ignore();
   // cout<< endl;
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
    //searchBook();
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
    if (count ==0){
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
    if (count ==0){
        cout<< endl << "Book not found."<<endl<<endl;
    }
}