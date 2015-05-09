//
//  Polynomial.cpp
//  DMColloquium
//
//  Created by Ilya Kulebyakin on 4/28/15.
//  Copyright (c) 2015 Ilya Kulebyakin. All rights reserved.
//

#include "Polynomial.h"
RationalNumber Polynomial::MUL_P_Q(RationalNumber &obj1)
{
    RationalNumber result;
    result=this->MULL_ZZ_Z(obj1);
    return result;
    
}
