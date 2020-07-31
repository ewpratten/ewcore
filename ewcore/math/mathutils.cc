#include <math.h>
#include "mathutils.hh"

double ewcore::math::clamp(double val, double low, double high){
    return std::fmax(low, std::fmin(val, high));
}