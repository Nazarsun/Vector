#pragma once

class Vector
{
private:
    double x;
    double y;
    double z;
public:
    Vector();
    Vector(double _x, double _y, double _z);
    ~Vector();
    void setX(double _x);
    double getX() const;
    void setY(double _y);
    double getY() const;
    void setZ(double _z);
    double getZ() const;

    void print();

    double absVector();

    void normali();

    void copy(Vector& object);

    void scalar(double alpha);
    friend Vector sumVector(const Vector& objectA, const Vector& objectB);
    friend Vector subVector(const Vector& objectA, const Vector& objectB);
    friend Vector mulVector(const Vector& objectA, const Vector& objectB);
    friend Vector sinusV(const Vector& objectA, const Vector& objectB);
};


Vector sumVector(const Vector& objectA, const Vector& objectB);

Vector subVector(const Vector& objectA, const Vector& objectB);

Vector mulVector(const Vector& objectA, const Vector& objectB);

double cosinusV(Vector& object1, Vector& object2);

double sinusV(Vector& obj1, Vector& obj2);

double scalarprod(Vector& obj1, Vector& obj2);