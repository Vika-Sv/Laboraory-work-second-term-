#ifndef SEGMENT_H
#define SEGMENT_H


class Segment {
private:
    double x1, y1, z1, x2, y2, z2;
public:
    Segment();

    Segment(double x1, double y1, double z1, double x2, double y2, double z2);

    Segment(const Segment& other);

    ~Segment();
     
    double getLength() const;
    double getAngleOY() const;
};

#endif
