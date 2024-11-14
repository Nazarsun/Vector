#include "Vector.h"
#include <iostream>

Vector::Vector()
{
    x = 1.0;
    y = 2.0;
    z = 3.0;
    std::cout << "First constructor complete\n";
}

Vector::Vector(double _x, double _y, double _z)
{
    x = _x;
    y = _y;
    z = _z;
    std::cout << "Second constructor complete\n";
}

Vector::~Vector()
{
    std::cout << "Destructor complete\n";
}

void Vector::setX(double _x)
{
    x = _x;
}

double Vector::getX() const
{
    return x;
}

void Vector::setY(double _y)
{
    y = _y;
}

double Vector::getY() const
{
    return y;
}

void Vector::setZ(double _z)
{
    z = _z;
}

double Vector::getZ() const
{
    return z;
}


void Vector::print()
{
    std::cout << "\n" << "x = " << x << "\n" << "y = " << y << "\n" << "z = " << z << "\n\n";
}


//модуль вектора
double Vector::absVector()
{
    return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

//нормализация вектора
void Vector::normali()
{
    double modulV = absVector();
    x /= modulV;
    y /= modulV;
    z /= modulV;
    std::cout << "The Vector is normalized: \n";
    print();
}

void Vector::copy(Vector& object)
{
    x = object.x;
    y = object.y;
    z = object.z;
    std::cout << "copy success:\n ";
    print();
}

void Vector::scalar(double alpha)
{
    x *= alpha;
    y *= alpha;
    z *= alpha;
    std::cout << "multiplication by scalar succeed:";
    print();
}


Vector sumVector(const Vector& objectA, const Vector& objectB)
{
    return Vector(objectA.x + objectB.x, objectA.y + objectB.y, objectA.z + objectB.z);
}

Vector subVector(const Vector& objectA, const Vector& objectB)
{
    return Vector(objectA.x - objectB.x, objectA.y - objectB.y, objectA.z - objectB.z);
}

Vector mulVector(const Vector& objectA, const Vector& objectB)
{
    return Vector(objectA.x * objectB.x, objectA.y * objectB.y, objectA.z * objectB.z);
}

double cosinusV(Vector& object1, Vector& object2)
{
    double modul1 = object1.absVector();
    double modul2 = object2.absVector();
    double mul = object1.getX() * object2.getX() + object1.getY() * object2.getY() + object1.getZ() * object2.getZ();
    return mul / (modul1 * modul2);
}

double sinusV(Vector& obj1, Vector& obj2)
{
    double cosi = cosinusV(obj1, obj2);
    return sqrt(1 - pow(cosi, 2));
}

double scalarprod(Vector& obj1, Vector& obj2)
{
    return obj1.absVector() * obj2.absVector() * cosinusV(obj1, obj2);
}