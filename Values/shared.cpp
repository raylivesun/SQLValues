//
// Created by admin on 15/03/24.
//

#include "shared.h"
#ifdef _WIN32
#elif defined(__MMX_WITH_SSE__) && defined(__MMX_WITH_SSE__)
#include <memory> // Requires C++11 or above
#include <iostream>
int shared()
{
    std::shared_ptr<int> p_x(new int);
    std::cout<<"p_x use count: "<<p_x.use_count()<<"\n";
    *p_x = 5; // ’de-reference’ to alter contents
    // Use this pointer elsewhere
    std::shared_ptr<int> p_y = p_x;
    std::cout<<"p_x use count: "<<p_x.use_count()<<"\n";
    p_y.reset();
    std::cout<<"p_x use count: "<<p_x.use_count()<<"\n";
    p_x.reset();
    std::cout<<"p_x use count: "<<p_x.use_count()<<"\n";
    return 0;
}
#endif //_WIN32