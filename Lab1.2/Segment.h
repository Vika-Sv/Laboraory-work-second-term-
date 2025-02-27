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


    double getX1() const { return x1; }
    double getY1() const { return y1; }
    double getZ1() const { return z1; }
    double getX2() const { return x2; }
    double getY2() const { return y2; }
    double getZ2() const { return z2; }
};

#endif
