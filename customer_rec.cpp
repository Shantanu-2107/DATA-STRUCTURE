

//write a c++ program using recursion to display a restaurent menu and allow the user
//to slect an option untilthe user chooses to exit.
#include <iostream>
using namespace std;
int main() {
    int choice;
    cout << "Welcome to the Restaurant Menu!" << endl;
    cout << "1. Pizza" << endl;
    cout << "2. Burger" << endl;
    cout << "3. Pasta" << endl;
    cout << "4. Exit" << endl;

    cout << "Please select an option (1-4): ";
    cin >> choice;

    if (choice == 4) {
        cout << "Thank you for visiting! Goodbye!" << endl;
        return 0; 
    } else if (choice >= 1 && choice <= 3) {
        cout << "You have selected option " << choice << "." << endl;
        main(); 
    } else {
        cout << "Invalid option. Please try again." << endl;
        main(); 
    }

    return 0;
}
    
 
 