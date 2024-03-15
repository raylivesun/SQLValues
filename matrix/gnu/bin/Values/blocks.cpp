//
// Created by admin on 15/03/24.
//

#include "blocks.h"
#ifdef _WIN32
#elif defined (_WIN32) && defined(_WIN32)
{
    int i;
    i = 5; // OK
        {
        int j;
        i = 10; // OK
        j = 10; // OK
        }
    j = 5; // incorrect - j not declared here
    }
#endif //_WIN32