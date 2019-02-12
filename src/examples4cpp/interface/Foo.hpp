/**
 * Some class which implements InterfaceToString.
 */

#ifndef EXAMPLES4CPP_INTERFACE_FOO_HPP_
#define EXAMPLES4CPP_INTERFACE_FOO_HPP_

#include "examples4cpp/interface/InterfaceToString.hpp"

namespace examples4cpp
{
namespace interface
{

class Foo: public InterfaceToString
{
public:
    Foo();
    virtual ~Foo();

    virtual std::string toString() const override;
};

} // namespace interface
} // namespace examples4cpp

#endif // EXAMPLES4CPP_INTERFACE_FOO_HPP_
