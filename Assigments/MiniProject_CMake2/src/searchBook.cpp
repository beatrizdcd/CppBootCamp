#include "BookShop.h"

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

void Book::printBook(){   
    cout << "- Title Name:  "<< title << endl ;
    cout << "- Author Name:  "<< author << endl ;
    cout << "- Publisher Name:  "<< publisher << endl;
    cout << "- Price:  "<< price << endl;
    cout << "- Number of Copies:  "<< stock << endl<< endl;
}
