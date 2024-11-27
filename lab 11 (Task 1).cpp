#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    string author;
    int year;
    int pages;
};

void inputBook(Book &book) {
    cout << "Enter book title: ";
    cin >> book.title;
    cout << "Enter book author: ";
    cin >> book.author;
    cout << "Enter year of publication: ";
    cin >> book.year;
    cout << "Enter number of pages: ";
    cin >> book.pages;
}

void displayBook(const Book &book) {
    cout << "Title: " << book.title << endl;
    cout << "Author: " << book.author << endl;
    cout << "Year of publication: " << book.year << endl;
    cout << "Number of pages: " << book.pages << endl;
}

int main() {
    Book books[5];
    for(int i = 0; i < 5; i++)
	 {
        cout<<"Enter information for book "<< i + 1 << ":" << endl;
        inputBook(books[i]);
    }
    for(int i = 0; i < 5; i++) 
	{
        cout<<"Book "<<i + 1<<":"<< endl;
        displayBook(books[i]);
        cout<<endl;
    }
    return 0;
}
