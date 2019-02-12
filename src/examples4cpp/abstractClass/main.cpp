/**
 * TODO
 */

#include <cstdlib>
#include <iostream>

#include "Rectangle.hpp"
#include "Square.hpp"

using namespace examples4cpp::abstractClass;

void printArea(const AbstractQuad& abstractQuad)
{
    std::cout << "abstractQuad area = " << abstractQuad.getArea() << std::endl;
}

int main()
{
    std::cout << "Abstract Class Example" << std::endl;
    std::cout << std::endl;

    Rectangle rectangle(2, 3);
    std::cout << "rectangle area = " << rectangle.getArea() << std::endl;
    printArea(rectangle);

    std::cout << std::endl;

    Square Square(4);
    std::cout << "Square area = " << Square.getArea() << std::endl;
    printArea(Square);

    std::cout << std::endl;

    return EXIT_SUCCESS;
}
