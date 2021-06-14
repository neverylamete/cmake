//
// Created by ant on 14.06.2021.
//

#include "lib_rational.h"


#include "cmath"

void rational::reduction()
{
    int t = 0;
    while (true)
    {
        if (t <= std::abs(numerator) && t <= std::abs(denominator))
        {
            if (numerator % t == 0 && denominator % t == 0)
            {
                numerator = numerator / t;
                denominator = denominator / t;
                t = 0;
            }
            else
            {
                ++t;
            }
        }
        else
        {
            break;
        }
    }
}
