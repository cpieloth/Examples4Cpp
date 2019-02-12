/**
 * Abstract base class for quads.
 *
 * It is abstract because of at least one pure virtual function.
 * Usually the constructor is protected.
 */

#ifndef EXAMPLES4CPP_ABSTRACTCLASS_ABSTRACTQUAD_HPP_
#define EXAMPLES4CPP_ABSTRACTCLASS_ABSTRACTQUAD_HPP_

namespace examples4cpp
{
namespace abstractClass
{

class AbstractQuad
{
public:
    virtual ~AbstractQuad();

    /**
     * Calculate the area of the quad.
     *
     * @return area
     */
    virtual double getArea() const = 0;

protected:
    AbstractQuad(double a, double b, double c, double d);

    const double m_a, m_b, m_c, m_d;
};

} // namespace abstractClass
} // namespace examples4cpp

#endif // EXAMPLES4CPP_ABSTRACTCLASS_ABSTRACTQUAD_HPP_
