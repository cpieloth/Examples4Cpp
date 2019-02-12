#include <iostream>

#include "Square.hpp"

using namespace examples4cpp::abstractClass;

Square::Square(double a) :
        AbstractQuad(a, a, a, a)
{
    std::clog << "Square::Square() called" << std::endl;
}

Square::~Square()
{
    std::clog << "Square::~Square() called" << std::endl;
}

double Square::getArea() const
{
    return m_a * m_a;
}
