/**
 * A class with a toString-like "std::ostream& operator<<(std::ostream& os, const Foo& foo)" method.
 */

#ifndef EXAMPLES4CPP_TOSTRING_FOO_HPP_
#define EXAMPLES4CPP_TOSTRING_FOO_HPP_

#include <ostream>

namespace examples4cpp
{
namespace toString
{

class Foo
{
public:
    Foo(int foo);
    virtual ~Foo();

    friend std::ostream& operator<<(std::ostream& strm, const Foo& obj);

private:
    const int m_foo;
};

inline std::ostream& operator<<(std::ostream& strm, const Foo& obj)
{
    strm << "Foo{m_foo=" << obj.m_foo << "}";
    return strm;
}

} // namespace toString
} // namespace examples4cpp

#endif // EXAMPLES4CPP_TOSTRING_FOO_HPP_
