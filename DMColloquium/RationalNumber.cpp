//
//  RationalNumber.cpp
//  DMColloquium
//
//  Created by Ilya Kulebyakin on 4/28/15.
//  Copyright (c) 2015 Ilya Kulebyakin. All rights reserved.
//

#include "RationalNumber.h"

RationalNumber::RationalNumber()
{
    numerator = Integer();
    denominator = NaturalNumber(1);
}

RationalNumber::RationalNumber(RationalNumber const& source)
{
    this->numerator = source.numerator;
    this->denominator = source.denominator;
}


