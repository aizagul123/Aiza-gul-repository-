#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h> // to access windows library
using namespace std;

struct Book {
    string title;
    string author;
    int quantity;
};

void initializeBooks(Book *books, int &size) {
    books[0] = {"The Great Gatsby", "F. Scott Fitzgerald", 5};
    books[1] = {"1984", "George Orwell", 3};
    books[2] = {"To Kill a Mockingbird", "Harper Lee", 4};
    books[3] = {"The Catcher in the Rye", "J.D. Salinger", 2};
    books[4] = {"Moby Dick", "Herman Melville", 1};
    size = 5; // Set the size to the number of initialized books
}

void setConsoleColor(int backgroundColor, int textColor) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (backgroundColor << 4) | textColor);
}

void addBook(Book *books, int &size) {
    setConsoleColor(2, 7); // Light green background, white text



///
    cout << "-------------------------------------------------------------" << endl;
    cout << "| Title                     | Author              | Quantity |" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl << endl;
    for (int i = 0; i < size; i++) {
        cout << "| " << books[i].title;
        // Adjusting the title length
        for (int j = books[i].title.length(); j < 25; j++) {
            cout << " ";
        }
        cout << "| " << books[i].author;
        // Adjusting the author length
        for (int j = books[i].author.length(); j < 20; j++) {
            cout << " ";
        }
        cout << "| " << books[i].quantity << "      |" << endl;
    }
    cout << "-------------------------------------------------------------" << endl;
    setConsoleColor(0, 7); // Reset to default color

/////


    cout << "Enter book title: ";
    cin.ignore(); // Clear the input buffer
    getline(cin, books[size].title);

    cout << "Enter book author: ";
    getline(cin, books[size].author);

    cout << "Enter book quantity: ";
    cin >> books[size].quantity;
    size++;
    cout << "Book added successfully!" << endl;

    setConsoleColor(0, 7); // Reset to default color
}

void displayBooks(Book *books, int size) {
    setConsoleColor(1, 15); // Light blue background, white text
    
    
    ////

    cout << "-------------------------------------------------------------" << endl;
    cout << "| Title                     | Author              | Quantity |" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl << endl;
    for (int i = 0; i < size; i++) {
        cout << "| " << books[i].title;
        // Adjusting the title length
        for (int j = books[i].title.length(); j < 25; j++) {
            cout << " ";
        }
        cout << "| " << books[i].author;
        // Adjusting the author length
        for (int j = books[i].author.length(); j < 20; j++) {
            cout << " ";
        }
        cout << "| " << books[i].quantity << "      |" << endl;
    }
    cout << "-------------------------------------------------------------" << endl;
    setConsoleColor(0, 7); // Reset to default color
    
    //////
}

void updateBook(Book *books, int size) {
    setConsoleColor(4, 15); // Light red background, white text
    string title;


///
    cout << "-------------------------------------------------------------" << endl;
    cout << "| Title                     | Author              | Quantity |" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl << endl;
    for (int i = 0; i < size; i++) {
        cout << "| " << books[i].title;
        // Adjusting the title length
        for (int j = books[i].title.length(); j < 25; j++) {
            cout << " ";
        }
        cout << "| " << books[i].author;
        // Adjusting the author length
        for (int j = books[i].author.length(); j < 20; j++) {
            cout << " ";
        }
        cout << "| " << books[i].quantity << "      |" << endl;
    }
    cout << "-------------------------------------------------------------" << endl;
    setConsoleColor(0, 7); // Reset to default color



/////

    cout << "Enter book title to update: ";
    cin.ignore(); // Clear the input buffer
    getline(cin, title);

    for (int i = 0; i < size; i++) {
        if (books[i].title == title) {
            cout << "Enter new book author: ";
            getline(cin, books[i].author);
            cout << "Enter new book quantity: ";
            cin >> books[i].quantity;
            cout << "Book updated successfully!" << endl;
            return;
        }
    }

    cout << "Book not found." << endl;
    setConsoleColor(0, 7); // Reset to default color
}

void deleteBook(Book *books, int &size) {
    setConsoleColor(5, 15); // Light magenta background, white text


///
    cout << "-------------------------------------------------------------" << endl;
    cout << "| Title                     | Author              | Quantity |" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl << endl;
    for (int i = 0; i < size; i++) {
        cout << "| " << books[i].title;
        // Adjusting the title length
        for (int j = books[i].title.length(); j < 25; j++) {
            cout << " ";
        }
        cout << "| " << books[i].author;
        // Adjusting the author length
        for (int j = books[i].author.length(); j < 20; j++) {
            cout << " ";
        }
        cout << "| " << books[i].quantity << "      |" << endl;
    }
    cout << "-------------------------------------------------------------" << endl;
    setConsoleColor(0, 7); // Reset to default color


/////
    string title;
    cout << "Enter book title to delete: ";
    cin.ignore(); // Clear the input buffer
    getline(cin, title);

    for (int i = 0; i < size; i++) {
        if (books[i].title == title) {
            // Shift all books after the deleted book to the left
            for (int j = i; j < size - 1; j++) books[j] = books[j + 1];
            }
            size--;
            cout << "Book deleted successfully!" << endl;
            return;
        }
    
    cout << "Book not found." << endl;
}

void borrowBook(Book *books, int size) {
    setConsoleColor(6, 15); // Light yellow background, white text


///
    cout << "-------------------------------------------------------------" << endl;
    cout << "| Title                     | Author              | Quantity |" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl << endl;
    for (int i = 0; i < size; i++) {
        cout << "| " << books[i].title;
        // Adjusting the title length
        for (int j = books[i].title.length(); j < 25; j++) {
            cout << " ";
        }
        cout << "| " << books[i].author;
        // Adjusting the author length
        for (int j = books[i].author.length(); j < 20; j++) {
            cout << " ";
        }
        cout << "| " << books[i].quantity << "      |" << endl;
    }
    cout << "-------------------------------------------------------------" << endl;
    setConsoleColor(0, 7); // Reset to default color

/////


    string title;
    cout << "Enter book title to borrow: ";
    cin.ignore(); // Clear the input buffer
    getline(cin, title);

    for (int i = 0; i < size; i++) {
        if (books[i].title == title) {
            if (books[i].quantity > 0) {
                books[i].quantity--;
                cout << "Book borrowed successfully!" << endl;
            } else {
                cout << "Book is not available." << endl;
            }
            return;
        }
    }

    cout << "Book not found." << endl;
    setConsoleColor(0, 7); // Reset to default color
}

void returnBook(Book *books, int size) {
    setConsoleColor(3, 15); // Light cyan background, white text

///
    cout << "-------------------------------------------------------------" << endl;
    cout << "| Title                     | Author              | Quantity |" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl << endl;
    for (int i = 0; i < size; i++) {
        cout << "| " << books[i].title;
        // Adjusting the title length
        for (int j = books[i].title.length(); j < 25; j++) {
            cout << " ";
        }
        cout << "| " << books[i].author;
        // Adjusting the author length
        for (int j = books[i].author.length(); j < 20; j++) {
            cout << " ";
        }
        cout << "| " << books[i].quantity << "      |" << endl;
    }
    cout << "-------------------------------------------------------------" << endl;
    setConsoleColor(0, 7); // Reset to default color

/////

    string title;
    cout << "Enter book title to return: ";
    cin.ignore(); // Clear the input buffer
    getline(cin, title);

    for (int i = 0; i < size; i++) {
        if (books[i].title == title) {
            books[i].quantity++;
            cout << "Book returned successfully!" << endl;
            return;
        }
    }
    cout << "Book not found." << endl;
    setConsoleColor(0, 7); // Reset to default color
}

int main() {
    Book books[100];
    int size = 0;

    initializeBooks(books, size); // Initialize books at startup

    setConsoleColor(2, 15); // Light green background, white text
    system("cls");
    cout << setw(59) << "**********************************************" << endl;
    cout << setw(54) << "WELCOME TO LIBRARY MANAGEMENT SYSTEM" << endl;
    cout << setw(59) << "**********************************************" << endl;
    cout << endl << endl;

    string username;
    const int pass = 12345;
    int password;
    cout << "Enter the username: ";
    cin >> username;
    cout << "Enter the password: ";
    cin >> password;

    if ((username == "admin" || username == "Admin") && password == pass) {
        cout << "Successfully logged in!" << endl;
        system("cls");
        displayBooks(books, size); // Display initialized books

        while (true) {
            setConsoleColor(2, 15); // Light green background, white text
            system("pause");
            system("cls");
            cout << "Library Management System" << endl;
            setConsoleColor(4, 15); // Light red background, white text

            cout << "1. Book Management" << endl;
            cout << "2. Library Services" << endl;
 cout << "3. Exit" << endl;

            int choice;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1: {
                    setConsoleColor(4, 15); // Light red background, white text
                    cout << "Book Management" << endl;
                    cout << "1. Add Book" << endl;
                    cout << "2. Display Books" << endl;
                    cout << "3. Update Book" << endl;
                    cout << "4. Delete Book" << endl;
                    setConsoleColor(0, 7); // Reset to default color

                    int managementChoice;
                    cout << "Enter your choice: ";
                    cin >> managementChoice;

                    switch (managementChoice) {
                        case 1:
                            addBook(books, size);
                            break;
                        case 2:
                            displayBooks(books, size);
                            break;
                        case 3:
                            updateBook(books, size);
                            break;
                        case 4:
                            deleteBook(books, size);
                            break;
                        default:
                            cout << "Invalid choice. Please try again." << endl;
                    }
                    break;
                }
                case 2: {
                    int serviceChoice;
                    setConsoleColor(6, 15); // Light yellow background, white text                    
                    cout << "Library Services" << endl;
                    cout << "1. Borrow Book" << endl;
                    cout << "2. Return Book" << endl;

                    setConsoleColor(0, 7); // Reset to default color
                    cout << "Enter your choice: ";
                    cin >> serviceChoice;

                    switch (serviceChoice) {
                        case 1:
                            borrowBook(books, size);
                            break;
                        case 2:
                            returnBook(books, size);
                            break;
                        default:
                            cout << "Invalid choice. Please try again." << endl;
                    }
                    break;
                }
                case 3:
                    setConsoleColor(2, 15); // Light green background, white text
                    cout << "Exiting program. Goodbye!" << endl;
                    setConsoleColor(0, 7); // Reset to default color
                    return 0; 
                default:
                    cout << "Invalid choice. Please try again." << endl;
            }
        }
    } else {
        cout << "Invalid username or password." << endl;
    }

    return 0;
}
