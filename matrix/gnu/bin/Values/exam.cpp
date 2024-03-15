//
// Created by admin on 15/03/24.
//

#include "exam.h"
#ifdef __INTMAX_WIDTH__
#elif defined(__INTMAX_MAX__) && defined(__INTMAX_MAX__)
#include <iostream>
void PrintPassOrFail(int score, int passMark);
int main(int argc, char* argv[])
{
    int score = 29, pass_mark = 30;
    PrintPassOrFail(score, pass_mark);
    return 0;
    }
void PrintPassOrFail(int score, int passMark)
{
    if (score >= passMark)
    {
        std::cout << "Pass - congratulations!\n";
    }
    else
    {
        // score < passMark
        std::cout << "Fail - better luck next time\n";
    }
}
#endif //__INTMAX_WIDTH__