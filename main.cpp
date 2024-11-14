#include <math.h>
#include <iostream>
#include "Vector.h"

#define MATH_PI 

using namespace std;


int main()
{
    Vector objectA, objectB, objectC;

    objectA.setX(3);
    objectA.setY(0);

    cout << "vector A: ";
    objectA.print();

    cout << "\n" << "Modulus of vector = " << objectA.absVector() << "\n";


    objectB.print();

    objectC = sumVector(objectA, objectB);
    objectC.print();

    objectC.normali();
    //objectC.print();

    objectC.copy(objectB);

    objectC.print();

    objectC.scalar(3);
    objectC.print();

    cout << "Cos between A and B = " << cosinusV(objectA, objectB) << "\n";
    cout << "Sin between A and B = " << sinusV(objectA, objectB) << "\n";
    cout << "Scalar product of A and B = " << scalarprod(objectA, objectB) << "\n";



    cout << "Angle between A and B = " << atan2(sinusV(objectA, objectB) / cosinusV(objectA, objectB), 1) * 180 / 3.1415 << "\n";
    //cout << "\n" << atan2(mulVector(objectA, objectB).absVector(), scalarprod(objectA, objectB))* 180 / 3.1415;
}