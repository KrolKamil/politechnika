#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
using namespace std;

class Circle
{
    public:
        Circle();
        ~Circle();
        void setValues();
        void ifPointBelongsToCirle();

    protected:

    private:

        double xCenter;
        double yCenter;

        double xPoint;
        double yPoint;

        double r;
};

#endif // CIRCLE_H
