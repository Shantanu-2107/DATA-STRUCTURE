#include <iostream>
using namespace std;

int main() {
    int marks[5], temp;

    cout << "Enter marks of 5 students:" << endl;

    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
    }

    // Arrange marks in descending order
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (marks[i] < marks[j]) {
                temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
            }
        }
    }

    cout << "Marks from highest to lowest:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << marks[i] << " ";
    }

    return 0;
}