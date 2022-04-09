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
#include "MiniProject_BookShop.hpp"

//Book b[nBooks];
Book *bptr[100]; 

void printMenu(int &choice);
void searchBook();

int main(){

    //Book *bptr[100];  // create an array of pointers 


    int choice;
    //Book b[nBooks];
    while(nBooks >= 0){
        printMenu (choice);
        switch (choice) {
            case 1:
                b[nBooks].newBook();
                break;
            case 2:
                b[nBooks].buyBook();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                b[nBooks].editBook();
                break;
            case 5:
                cout<< endl << "Bye." << endl;
                break;    
            default:
                cout << "Choice not valid." << endl;
            break;
     }
    break; 
    }  
    
    return 0;
}

void printMenu (int &choice){ // I sent the value of choice
    cout <<"      - MENU -"<<endl;
    cout <<"-----------------------"<<endl;
    cout<< "1. Entry of New Book"<<endl;
    cout<< "2. Buy Book"<<endl;
    cout<< "3. Search For Book"<<endl;
    cout<< "4. Edit Details Of Book"<<endl;
    cout<< "5. Exit"<<endl<<endl;
    cout<< "Enter your Choice: ";
    cin >> choice;
    cin.ignore();
}

//CHOICE 3
void searchBook(){   
    string titleSearch, authorSearch;
    cout<< endl<< "- Enter Title Of Book: ";
    getline(cin, titleSearch);
    cout << "- Enter Author Of Book: ";
    getline(cin, authorSearch);

    for (int i = 0; i < nBooks ; i++){
        bool (titleSearch == b[i].title && authorSearch == b[i].author){
            cout<< endl << "Book Found Sucessfully"<<endl;
            b[i].printBook();
        }else{
            cout<< endl << "Book not found."<<endl<<endl;
        }
    }
}

