#include "Segment.h"
#define _USE_MATH_DEFINES
#include <cmath>


Segment::Segment() {
    x1 = y1 = z1 = 1;
    x2 = y2 = z2 = 0;
}

Segment::Segment(const Segment& other) {
    x1 = other.x1; y1 = other.y1; z1 = other.z1;
    x2 = other.x2; y2 = other.y2; z2 = other.z2;
}

Segment::~Segment() {
}

double Segment::getLength() const {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
}

double Segment::getAngleOY() const {
    double length = getLength();
    return acos(abs(y2 - y1) / length) * 180 / M_PI;
}

