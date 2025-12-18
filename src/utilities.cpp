#include "utilities.h"
#include <iostream>
#include <limits>
using namespace std;

void clearInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void showMainMenu() {
    cout << "\n====== Physics Helper ======\n";
    cout << "1. Mechanics\n";
    cout << "2. Kinematics\n";
    cout << "3. Gravitation\n";
    cout << "4. Exit\n";
    cout << "Select a topic: ";
}

void pause() {
    cout << "\nPress Enter to continue...";
    cin.ignore();
    cin.get();
}
