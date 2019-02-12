#include <iostream>

#include "Rectangle.hpp"

using namespace examples4cpp::abstractClass;

Rectangle::Rectangle(double a, double b) :
        AbstractQuad(a, b, a, b)
{
    std::clog << "Rectangle::Rectangle() called" << std::endl;
}

Rectangle::~Rectangle()
{
    std::clog << "Rectangle::~Rectangle() called" << std::endl;
}

double Rectangle::getArea() const
{
    return m_a * m_b;
}
