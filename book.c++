#include <iostream>
using namespace std;
int main()
{
    int id1, id2, id3;
    string title1, title2, title3;

    //book 1

    cout << "Enter the ID of book 1: ";
    cin >> id1;
    cin.ignore(); // Ignore the newline character left in the input buffer

    cout << "Enter the title of book 1: ";
    getline(cin, title1);

    //book 2
    cout << "Enter the ID of book 2: ";
    cin >> id2;
    cin.ignore(); // Ignore the newline character left in the input buffer

    cout << "Enter the title of book 2: ";
    getline(cin, title2);

    //book 3
    cout << "Enter the ID of book 3: ";
    cin >> id3;
    cin.ignore(); // Ignore the newline character left in the input buffer

    cout << "Enter the title of book 3: ";
    getline(cin, title3);

    cout<<"\n Library Book List";

    cout<<"\nBook id: "<<id1;
    cout<<"\nBook title: "<<title1;

    cout<<"\nBook id: "<<id2;
    cout<<"\nBook title: "<<title2;

    cout<<"\nBook id: "<<id3;
    cout<<"\nBook title: "<<title3; 

    return 0;
}