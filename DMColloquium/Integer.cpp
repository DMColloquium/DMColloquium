//
//  Integer.cpp
//  DMColloquium
//
//  Created by Ilya Kulebyakin on 4/28/15.
//  Copyright (c) 2015 Ilya Kulebyakin. All rights reserved.
//

#include "Integer.h"
using namespace std;

/*
 * 4302 Levchenko
 * \{begin block}
 */
bool Integer::check() const
{
    return !bad();
}
bool Integer::bad() const
{
    return digitBlocks.empty();
}
bool operator ==(Integer const& left, Integer const& right)
{
    return (left.digitBlocks == right.digitBlocks) && (left.isPositive == right.isPositive);
}
bool operator !=(Integer const& left, Integer const& right)
{
    return !(left == right);
}
/*
 * 4302 Levchenko
 * \{end block}
 */
 