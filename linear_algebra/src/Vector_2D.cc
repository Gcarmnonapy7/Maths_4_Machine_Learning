#include "Vector_2D.hh"
#include <stdexcept>

Vector_2D::Vector_2D(double x_val, double y_val) : x(x_val), y(y_val) 
{ 
    x = x_val;
    y = y_val;
}

double Vector_2D::dot_product(const Vector_2D& other) const
{
    return (x * other.x) + (y * other.y);
}