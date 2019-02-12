/**
 * Square implementation of AbstractQuad.
 */

#ifndef EXAMPLES4CPP_ABSTRACTCLASS_SQUARE_HPP_
#define EXAMPLES4CPP_ABSTRACTCLASS_SQUARE_HPP_

#include "examples4cpp/abstractClass/AbstractQuad.hpp"

namespace examples4cpp
{
namespace abstractClass
{

class Square: public AbstractQuad
{
public:
    Square(double a);
    virtual ~Square();

    /**
     * @sa examples4cpp::abstractClass::AbstractQuad::getArea()
     */
    virtual double getArea() const override;
};

} // namespace abstractClass
} // namespace examples4cpp

#endif //EXAMPLES4CPP_ABSTRACTCLASS_SQUARE_HPP_
