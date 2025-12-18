#include "mechanics.h"

double calculateForce(double mass, double acceleration) {
    return mass * acceleration;
}

double calculateWork(double force, double distance) {
    return force * distance;
}

double calculatePower(double work, double time) {
    return work / time;
}

double calculateAcceleration(double force, double mass) {
    return force / mass;
}
