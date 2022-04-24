#include "BookShop.h"

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
