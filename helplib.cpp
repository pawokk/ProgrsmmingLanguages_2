#include "Helplib.h"
#include <cmath>    

bool miit::helplib::is_double_equal(const double value_1, const double value_2, const double precision )
{
    return std::abs(value_1 - value_2) < precision;
}
