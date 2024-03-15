//
// Created by admin on 15/03/24.
//

#include "backend.h"
#ifdef _WIN32
#elif defined(__MMX_WITH_SSE__) && defined(__MMX_WITH_SSE__)
double** AllocateMatrixMemory(int numRows, int numCols);
void FreeMatrixMemory(int numRows, double** matrix);
int backend(int argc, char* argv[])
{
    double** A;
    A = AllocateMatrixMemory(5, 3);
    A[0][1] = 2.0;
    A[4][2] = 4.0;
    FreeMatrixMemory(5, A);
    return 0;
}
// Function to allocate memory for a matrix dynamically
double** AllocateMatrixMemory(int numRows, int numCols)
{
    double** matrix;
    matrix = new double* [numRows];
    for (int i=0; i<numRows; i++)
    {
        matrix[i] = new double [numCols];
    }
    return matrix;
}
// Function to free memory of a matrix
void FreeMatrixMemory(int numRows, double** matrix)
{
    for (int i=0; i<numRows; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}
#endif //_WIN32