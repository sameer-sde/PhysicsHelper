#include "gravitation.h"

const double G = 6.67430e-11; // gravitational constant

double calculateGravitationalForce(double mass1, double mass2, double distance) {
    return G * mass1 * mass2 / (distance * distance);
}

double calculateWeight(double mass, double gravity) {
    return mass * gravity;
}
