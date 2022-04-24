
#include "BookShop.h"

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
