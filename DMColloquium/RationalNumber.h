//
//  RationalNumber.h
//  DMColloquium
//
//  Created by Ilya Kulebyakin on 4/28/15.
//  Copyright (c) 2015 Ilya Kulebyakin. All rights reserved.
//

#ifndef IntegerIncluded
#define IntegerIncluded

#include "Integer.h"
#include "NaturalNumber.h"



class RationalNumber {
private:
    Integer numerator;
    NaturalNumber denominator;
public:
    // Instanciates a rational number (0/1)
    RationalNumber();
    RationalNumber(Integer numerator, NaturalNumber denominator):numerator{numerator},denominator{denominator}{};
    RationalNumber MUL_QQ_Q(RationalNumber n);
    // declarations for methods
};

#endif
