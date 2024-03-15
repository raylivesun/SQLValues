//
// Created by admin on 15/03/24.
//

#include "both.h"
#ifdef _WIN32
#elif defined(__WINT_MAX__) && defined(__WINT_MIN__)
#include <iostream>
int i = 5; // global i
int both(int argc, char* argv[])
{
    int j = 7;
    std::cout << i << "\n";
    {
        int i = 10, j = 11;
        std::cout << i << "\n"; // local value of i is 10
        std::cout << ::i << "\n"; // global value of i is 5
        std::cout << j << "\n"; // value of j here is 11
        //The other j (value 7) is inaccessible
    }
    std::cout << j << "\n"; // value of j here is 7
    return 0;
}
#endif //_WIN32