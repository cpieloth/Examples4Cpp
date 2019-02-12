#include <iostream>
#include <ostream>
#include <sstream>

#include "Foo.hpp"

using namespace examples4cpp::toString;

Foo::Foo(int foo) :
        m_foo(foo)
{
    std::clog << "Foo::Foo() called" << std::endl;
}

Foo::~Foo()
{
    std::clog << "Foo::~Foo() called" << std::endl;
}

std::string Foo::toString() const
{
    // Use existing serialization of operator<<
    std::stringstream sstream;
    sstream << *this;
    return sstream.str();
}
