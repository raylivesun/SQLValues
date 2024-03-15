//
// Created by admin on 15/03/24.
//

#include "goodmemory.h"
#ifdef _WIN32
#elif defined(__MMX_WITH_SSE__) && defined(__MMX_WITH_SSE__)
#include <memory> // Requires C++11 or above
int goodmemory()
{
    // The following won’t compile because p_x
    // is not a raw pointer to int
    // int* p_y = p_x;
    return 0;
    }
#endif//_WIN32