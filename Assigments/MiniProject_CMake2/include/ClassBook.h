#ifndef MYCLASS_H
#define MYLCLASS_H

#include <iostream>
#include<string.h>

using namespace std;

class Book{
    public:
        string author, title, publisher;
        double price;
        unsigned int stock;
      
    public:
        Book(){   // use default instead
            author = "undefined";
            title = "undefined";
            publisher = "undefined";
            price = 0;
            stock = 0;
        }
        void addBook();
        void printBook();    
         ~Book(){}
};


#endif