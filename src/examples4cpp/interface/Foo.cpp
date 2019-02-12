#include <iostream>

#include "Foo.hpp"

using namespace examples4cpp::interface;

Foo::Foo()
{
    std::clog << "Foo::Foo() called" << std::endl;
}

Foo::~Foo()
{
    std::clog << "Foo::~Foo() called" << std::endl;
}


std::string Foo::toString() const
{
    return "Foo{}";
}
