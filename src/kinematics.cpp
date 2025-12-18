#include "kinematics.h"

double calculateVelocity(double distance, double time) {
    return distance / time;
}

double calculateDistance(double velocity, double time) {
    return velocity * time;
}

double calculateTime(double distance, double velocity) {
    return distance / velocity;
}
