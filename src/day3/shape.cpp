#include <iostream>

struct Point {
    float x;
    float y;
};

struct Circle {
    Point center;
    float radius;
};

struct Rectangle {
    Point upperleft;
    Point lowerright;
};

int main()
{
    // Declare struct type variables.
    Point origin = { .x = 0.0, .y = 0.0 };
    Point p1 = { 1.0, 7.0 };
    Point p2 = { 3.0, 4.0 };
    Circle c1 = { .center = origin, .radius = 3.0 };
    Rectangle r1 = { p1, p2 };

    std::cout << "Circle c1:\n"
              << "\tcenter: (" << c1.center.x << ", " << c1.center.y << ")"
              << "\n\tradius: " << c1.radius << "\n\n";

    std::cout << "Scaling radius of c1 by twice!\n\n";

    c1.radius *= 2;

    std::cout << "[After scaling]\nCircle c1:\n"
              << "\tcenter: (" << c1.center.x << ", " << c1.center.y << ")"
              << "\n\tradius: " << c1.radius << "\n\n";

    std::cout << "Rectangle r1:\n"
              << "\twidth: " << r1.lowerright.x - r1.upperleft.x
              << ", height: " << r1.upperleft.y - r1.lowerright.y
              << "\n";

    return 0;
}
