#include <iostream>
#include <string>
using namespace std;

struct User {
    string name;
};S

void inputUsername(User &user) {
    cout << "Enter your username: ";
    cin >> user.name;
}

int login(const User &user) {
    string validUsername = "admin";
    if (user.name == validUsername) 
	{
        return 1; 
    } 
	else
	{
        return 0; 
    }
}

void displayWelcomeMessage(const User &user) {
    cout << "Welcome, " << user.name << "!" << endl;
}

int main() {
    User user;
    inputUsername(user);
    int loginStatus = login(user);
    if (loginStatus == 1) 
	{
        displayWelcomeMessage(user);
    }
	 else 
	{
        cout << "Invalid username. Please try again." << endl;
    }
    return 0;
}
