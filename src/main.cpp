#include <iostream>
#include "mechanics.h"
#include "kinematics.h"
#include "gravitation.h"
#include "utilities.h"
using namespace std;

void mechanicsMenu();
void kinematicsMenu();
void gravitationMenu();

int main() {
    int topic;
    do {
        showMainMenu();
        cin >> topic;
        clearInput();

        switch(topic) {
            case 1: mechanicsMenu(); break;
            case 2: kinematicsMenu(); break;
            case 3: gravitationMenu(); break;
            case 4: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }

    } while(topic != 4);

    return 0;
}

// --- Mechanics Menu ---
void mechanicsMenu() {
    int choice;
    cout << "\n--- Mechanics ---\n";
    cout << "1. Force (F = m*a)\n";
    cout << "2. Work (W = F*d)\n";
    cout << "3. Power (P = W/t)\n";
    cout << "4. Acceleration (a = F/m)\n";
    cout << "Select formula: ";
    cin >> choice;
    clearInput();

    double x, y;
    switch(choice) {
        case 1:
            cout << "Enter mass (kg): "; cin >> x;
            cout << "Enter acceleration (m/s^2): "; cin >> y;
            cout << "Force = " << calculateForce(x, y) << " N\n"; break;
        case 2:
            cout << "Enter force (N): "; cin >> x;
            cout << "Enter distance (m): "; cin >> y;
            cout << "Work = " << calculateWork(x, y) << " J\n"; break;
        case 3:
            cout << "Enter work (J): "; cin >> x;
            cout << "Enter time (s): "; cin >> y;
            cout << "Power = " << calculatePower(x, y) << " W\n"; break;
        case 4:
            cout << "Enter force (N): "; cin >> x;
            cout << "Enter mass (kg): "; cin >> y;
            cout << "Acceleration = " << calculateAcceleration(x, y) << " m/s^2\n"; break;
        default:
            cout << "Invalid choice!\n";
    }
    pause();
}

// --- Kinematics Menu ---
void kinematicsMenu() {
    int choice;
    cout << "\n--- Kinematics ---\n";
    cout << "1. Velocity (v = d/t)\n";
    cout << "2. Distance (d = v*t)\n";
    cout << "3. Time (t = d/v)\n";
    cout << "Select formula: ";
    cin >> choice;
    clearInput();

    double x, y;
    switch(choice) {
        case 1:
            cout << "Enter distance (m): "; cin >> x;
            cout << "Enter time (s): "; cin >> y;
            cout << "Velocity = " << calculateVelocity(x, y) << " m/s\n"; break;
        case 2:
            cout << "Enter velocity (m/s): "; cin >> x;
            cout << "Enter time (s): "; cin >> y;
            cout << "Distance = " << calculateDistance(x, y) << " m\n"; break;
        case 3:
            cout << "Enter distance (m): "; cin >> x;
            cout << "Enter velocity (m/s): "; cin >> y;
            cout << "Time = " << calculateTime(x, y) << " s\n"; break;
        default:
            cout << "Invalid choice!\n";
    }
    pause();
}

// --- Gravitation Menu ---
void gravitationMenu() {
    int choice;
    cout << "\n--- Gravitation ---\n";
    cout << "1. Gravitational Force (F = G*m1*m2/r^2)\n";
    cout << "2. Weight (W = m*g)\n";
    cout << "Select formula: ";
    cin >> choice;
    clearInput();

    double x, y, z;
    switch(choice) {
        case 1:
            cout << "Enter mass1 (kg): "; cin >> x;
            cout << "Enter mass2 (kg): "; cin >> y;
            cout << "Enter distance (m): "; cin >> z;
            cout << "Gravitational Force = " << calculateGravitationalForce(x, y, z) << " N\n"; break;
        case 2:
            cout << "Enter mass (kg): "; cin >> x;
            cout << "Enter gravity (m/s^2, default 9.8): ";
            if(!(cin >> y)) y = 9.8;
            cout << "Weight = " << calculateWeight(x, y) << " N\n"; break;
        default:
            cout << "Invalid choice!\n";
    }
    pause();
}
