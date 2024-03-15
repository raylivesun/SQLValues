//
// Created by admin on 15/03/24.
//

#include "called.h"
#include "iostream"
using namespace std;
#ifdef _WIN32
#elif defined(__WINT_MAX__) && defined(__WINT_MAX__)
void called(double x, double y)
{
    printf("called");
}
#endif//_WIN32