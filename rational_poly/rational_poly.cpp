#include <iostream>
#include "vector"


#include "../lib_rational/lib_rational.h"
//#include "lib_rational.h"


double gorner(const std::vector<double> &koef, const double &x)
{
    if (koef.empty())
    {
        return 0;
    }
    if (koef.size() == 1)
    {
        return koef[0] * x;
    }

    double sum = koef[0];
    for (int i = 1; i < koef.size(); i++)
    {
        sum = (sum * x) + koef[i];
    }
    return sum;
}


int main()
{
    std::vector<double> vec{2, -6, 2, -1};
    double x = 3;
    std::cout << gorner(vec, x) << std::endl;

    WorldKnoledge life;

    std::cout << "life = " << life.getMeaningofLife() << std::endl;

    return 0;
}
