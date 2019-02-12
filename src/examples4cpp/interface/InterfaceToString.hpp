/**
 * Interface to get string representation of an object.
 *
 * An abstract classes which contains pure virtual functions only, are interfaces.
 * No source file is required.
 */

#ifndef EXAMPLES4CPP_INTERFACE_INTERFACETOSTRING_HPP_
#define EXAMPLES4CPP_INTERFACE_INTERFACETOSTRING_HPP_

#include <string>

namespace examples4cpp
{
namespace interface
{

class InterfaceToString
{
public:
    virtual ~InterfaceToString() = default;

    /**
     * Generate a string representation.
     *
     * @return string representation
     */
    virtual std::string toString() const = 0;
};

} // namespace interface
} // namespace examples4cpp

#endif // EXAMPLES4CPP_INTERFACE_INTERFACETOSTRING_HPP_
