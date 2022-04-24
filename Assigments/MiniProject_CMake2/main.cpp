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

#include "BookShop.h"

int main(){

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
    return 0;

}
