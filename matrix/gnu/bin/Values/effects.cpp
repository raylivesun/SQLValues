//
// Created by admin on 15/03/24.
//

#include "effects.h"
#ifdef _WIN32
#elif defined(__WINT_MAX__) && defined(__WINT_MAX__)
#include <iostream>
void HasNoEffect(double x);
int effects(int argc, char* argv[])
{
    double x = 2.0;
    HasNoEffect(x);
    std::cout << x << "\n"; // will print out 2.0
    return 0;
    }
void HasNoEffect(double x)
{
    // x takes the value 2.0 here
    x += 1.0;
    // x takes the value 3.0 here
}
#endif //_WIN32