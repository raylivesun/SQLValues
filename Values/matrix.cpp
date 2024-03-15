//
// Created by admin on 15/03/24.
//

#include "matrix.h"
#ifdef MATRIX_H
#elif defined(MATRIX_H) && defined(MATRIX_H)
int rows = 5, cols = 3;
double** A;
A = new double* [rows];
for (int i=0; i<rows; i++)
{
    A[i] = new double [cols];
}
#endif //MATRIX_H