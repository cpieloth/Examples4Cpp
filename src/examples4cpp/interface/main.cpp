#include <cstdlib>
#include <iostream>

#include "InterfaceToString.hpp"
#include "Foo.hpp"

using namespace examples4cpp::interface;

void print(const InterfaceToString& obj)
{
    std::cout << "obj.toString(): " << obj.toString() << std::endl;
}

int main()
{
    std::cout << "Interface Example" << std::endl;
    std::cout << std::endl;

    Foo foo;
    std::cout << "foo.toString(): " << foo.toString() << std::endl;
    print(foo);

    std::cout << std::endl;

    return EXIT_SUCCESS;
}
