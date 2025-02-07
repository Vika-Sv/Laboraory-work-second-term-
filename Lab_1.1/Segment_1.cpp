#define _USE_MATH_DEFINES
#include "Segment_1.h"
#include <cmath>

Segment::Segment(double x1, double y1, double z1, double x2, double y2, double z2) {
    this->x1 = x1; this->y1 = y1; this->z1 = z1;
    this->x2 = x2; this->y2 = y2; this->z2 = z2;
}

double Segment::getLength() const {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
}

double Segment::getAngleOY() const {
    double length = getLength();
    return acos(abs(y2 - y1) / length) * 180 / M_PI;
}

