#ifndef GEOMETRIC_SHAPE_H
#define GEOMETRIC_SHAPE_H

#include <iostream>
#include <cmath>

class GeometricShape {
protected:
    double x, y;      
    double angle;      
    double scale;     

public:
    GeometricShape(double centerX = 0.0, double centerY = 0.0, double rotAngle = 0.0, double scFactor = 1.0);

    virtual ~GeometricShape() = default;

    virtual void show() = 0;
    virtual void hide() = 0;
    virtual void rotate(double degrees) = 0;
    virtual void move(double dx, double dy) = 0;
};

class Line : public GeometricShape {
private:
    double x2, y2; 

public:
    Line(double x1, double y1, double endX, double endY, double rotAngle = 0.0, double scFactor = 1.0);

    void show() override;
    void hide() override;
    void rotate(double degrees) override;
    void move(double dx, double dy) override;
};

#endif 