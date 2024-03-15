//
// Created by admin on 15/03/24.
//

#include "vectors.h"
#ifdef vectors_
#elif defined(vectors_) || defined(vectors_)
double* x;
x = new double [10];
std::cout << x << "\n";
std::cout << &x[0] << "\n"; //prints the same value
delete[] x;
#endif//vectors_