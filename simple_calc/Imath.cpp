#include "Imath.h"
#include <cmath>

double Icos(double parameter) // improved cos
{
    // first check if given parameter is a pi * k, k - Z
    double dividedPI = parameter / (I_PI);
    double rounded = std::round(dividedPI);
    double fract = dividedPI- rounded;
    if(fabs(fract) < EPSSILON) // was given k*pi
    {
        if(abs(int(rounded)) % 2 != 0)
            return -1.0;
        else
            return 1.0;
    }
    // second check if given parameter is a pi/2 * k, k - Z
    dividedPI = parameter / (I_PI/2);
    rounded = std::round(dividedPI);
    fract = dividedPI - rounded;
    if(fabs(fract) < EPSSILON) // was given k*pi
    {
        return 0.0;
    }
    return cos(parameter);
}


double Isin(double parameter)
{
    double dividedPI = parameter / I_PI;
    double rounded = std::round(dividedPI);
    double fract = dividedPI - rounded;

    if(fabs(fract) < EPSSILON) // was given k*pi/2
    {
        return 0.0;
    }
    return sin(parameter);
}

double Itan(double parameter)
{
    // first check if given parameter is a pi * k, k - Z
    double dividedPI = parameter / (I_PI);
    double rounded = std::round(dividedPI);
    double fract = dividedPI- rounded;
    if(fabs(fract) < EPSSILON) // was given k*pi
    {
        return 0;
    }
    // second check if given parameter is a pi/2 * k, k - Z
    dividedPI = parameter / (I_PI/2);
    rounded = std::round(dividedPI);
    fract = dividedPI - rounded;
    if(fabs(fract) < EPSSILON) // was given k*pi/2
    {
        return INFINITY;
    }
    return tan(parameter);
}

double Ictan(double parameter)
{
    // first check if given parameter is a pi * k, k - Z
    double dividedPI = parameter / (I_PI);
    double rounded = std::round(dividedPI);
    double fract = dividedPI- rounded;
    if(fabs(fract) < EPSSILON) // was given k*pi
    {
        return INFINITY;
    }
    // second check if given parameter is a pi/2 * k, k - Z
    dividedPI = parameter / (I_PI/2);
    rounded = std::round(dividedPI);
    fract = dividedPI - rounded;
    if(fabs(fract) < EPSSILON) // was given k*pi/2
    {
        return 0.0;
    }
    return atan(parameter);
}
