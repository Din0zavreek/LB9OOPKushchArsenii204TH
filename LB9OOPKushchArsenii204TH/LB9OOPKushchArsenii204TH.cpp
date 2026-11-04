#include "GeometricShape.h"
#include <Windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    GeometricShape* shape = new Line(0.0, 0.0, 5.0, 5.0);

    shape->show();
    shape->rotate(45.0);
    shape->move(10.0, 5.0);
    shape->hide();

    delete shape;

    return 0;
}