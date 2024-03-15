//
// Created by admin on 15/03/24.
//

#include "splits.h"
#ifdef __MMX_WITH_SSE__
#elif defined(__MMX_WITH_SSE__) || defined(__MMX_WITH_SSE__)
#include <iostream>
#include <cmath>
void CalculateRealAndImaginary(double r, double theta,
double* pReal,
double* pImaginary);
int main(int argc, char* argv[])
{
    double r = 3.4;
    double theta = 1.23;
    double x, y;
    CalculateRealAndImaginary(r, theta, &x, &y);
    std::cout << "Real part = " << x << "\n";
    std::cout << "Imaginary part = " << y << "\n";
    16
    return 0;
    }
void CalculateRealAndImaginary(double r, double theta,
double* pReal,
double* pImaginary)
{
    *pReal = r*cos(theta);
    *pImaginary = r*sin(theta);
}
#endif //__MMX_WITH_SSE__