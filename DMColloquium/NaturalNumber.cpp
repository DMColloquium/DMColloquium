//
//  NaturalNumber.cpp
//  DMColloquium
//
//  Created by Ilya Kulebyakin on 4/28/15.
//  Copyright (c) 2015 Ilya Kulebyakin. All rights reserved.
//

#include "NaturalNumber.h"
using namespace std;

// put definitions for all methods over here.

NaturalNumber::NaturalNumber()
{
    digitBlocks = std::vector<unsigned int>(1);
    digitBlocks[0] = 0;
}

/*
 * 4302 Levchenko
 * \{begin block}
 */
bool NaturalNumber::check() const
{
    return digitBlocks.empty() && !digitBlocks.back();
}
bool NaturalNumber::bad() const
{
    return !check();
}
bool operator ==(NaturalNumber const& left, NaturalNumber const& right)
{
    return left.digitBlocks == right.digitBlocks;
}
bool operator !=(NaturalNumber const& left, NaturalNumber const& right)
{
    return !(left == right);
}
/*
 * 4302 Levchenko
 * \{end block}
 */
