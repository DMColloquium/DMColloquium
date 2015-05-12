//
//  Integer.h
//  DMColloquium
//
//  Created by Ilya Kulebyakin on 4/28/15.
//  Copyright (c) 2015 Ilya Kulebyakin. All rights reserved.
//

#ifndef __DMColloquium__Integer__
#define __DMColloquium__Integer__

#include "NaturalNumber.h"
#include <vector>

class Integer : public NaturalNumber
{
private:
    bool isPositive;

public:
    Integer() : NaturalNumber{} {isPositive = true;};
    Integer(unsigned int number) : NaturalNumber{number} {isPositive = true;};
    Integer(unsigned int number, bool isPositive) : NaturalNumber{number}, isPositive{isPositive} {};
    Integer(std::vector<unsigned int> digits, bool isPositive = true) : NaturalNumber{digits}, isPositive{isPositive} {};
    Integer(NaturalNumber natural, bool isPositive = true) : NaturalNumber{natural}, isPositive{isPositive} {};

};

#endif /* defined(__DMColloquium__Integer__) */
