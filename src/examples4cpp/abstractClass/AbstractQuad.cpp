#include <iostream>

#include "AbstractQuad.hpp"

using namespace examples4cpp::abstractClass;

AbstractQuad::AbstractQuad(double a, double b, double c, double d) :
        m_a(a), m_b(b), m_c(c), m_d(d)
{
    std::clog << "AbstractQuad::AbstractQuad() called" << std::endl;
}

AbstractQuad::~AbstractQuad()
{
    std::clog << "AbstractQuad::~AbstractQuad() called" << std::endl;
}

