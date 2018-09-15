#pragma once
#include "PoweredUnit.h"
#include <math.h>

template<typename Unit>
Unit Units::Complex::PoweredUnit<Unit,2>::operator/(const Unit & rhs)
{
    return Unit(this->datum/rhs.RemoveUnits());
}
