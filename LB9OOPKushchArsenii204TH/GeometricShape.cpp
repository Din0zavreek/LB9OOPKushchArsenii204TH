#include "GeometricShape.h"

GeometricShape::GeometricShape(double centerX, double centerY, double rotAngle, double scFactor)
    : x(centerX), y(centerY), angle(rotAngle), scale(scFactor) {
}

Line::Line(double x1, double y1, double endX, double endY, double rotAngle, double scFactor)
    : GeometricShape(x1, y1, rotAngle, scFactor), x2(endX), y2(endY) {
}

void Line::show() {
    std::cout << "Пряма (відрізок) відображена на екрані. Точка 1: ("
        << x << ", " << y << "), Точка 2: (" << x2 << ", " << y2
        << "), Кут: " << angle << "°, Масштаб: " << scale << std::endl;
}

void Line::hide() {
    std::cout << "Пряма прихована (знищено зображення з екрана)." << std::endl;
}

void Line::rotate(double degrees) {
    angle += degrees;
    if (angle >= 360.0) angle -= 360.0;
    std::cout << "Пряму повернуто на " << degrees << "°. Поточний кут: " << angle << "°." << std::endl;
}

void Line::move(double dx, double dy) {
    x += dx;
    y += dy;
    x2 += dx;
    y2 += dy;
    std::cout << "Пряму пересунуто на вектор (" << dx << ", " << dy
        << "). Нові координати точок: (" << x << ", " << y << ") та ("
        << x2 << ", " << y2 << ")." << std::endl;
}