#ifndef VECTOR_2D_HH
#define VECTOR_2D_HH
#include <vector>

struct Vector_2D
{
    /* data */
    double x; 
    double y;

    // Constructors

    Vector_2D(double x_val, double y_val);
 
    // Method declarations 

    double dot_product(const Vector_2D& other) const;
};


#endif