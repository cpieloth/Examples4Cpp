#include <cstdlib>
#include <iostream>

#include "Foo.hpp"

using namespace examples4cpp::toString;

int main()
{
    std::cout << "ToString Example" << std::endl;
    std::cout << std::endl;

    Foo foo4(4);
    std::cout << "foo4.toString(): " << foo4.toString() << std::endl;
    std::cout << "foo4=" << foo4 << std::endl;

    std::cout << std::endl;

    Foo foo5(5);
    std::cout << "foo5.toString(): " << foo5.toString() << std::endl;
    std::cout << "foo5=" << foo5 << std::endl;

    std::cout << std::endl;

    std::cout << "foo4=" << foo4 << "; foo5=" << foo5 << std::endl;

    std::cout << std::endl;

    return EXIT_SUCCESS;
}
