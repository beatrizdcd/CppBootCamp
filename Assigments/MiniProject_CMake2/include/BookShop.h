
#ifndef MYLIB_H
#define MYLIB_H

#include "ClassBook.h"

const int nBooks = 100;  
Book *bookPtr[nBooks];   // array of pointers to book
int s = 0;    // number of books
int choice;

void chooseOption();
void buyBook();
void searchBook();
void editBook();
void printMenu();


#endif

