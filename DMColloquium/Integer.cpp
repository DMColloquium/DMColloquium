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
 * Author: Тулупов Артём 4302
 */
NaturalNumber Integer::TRANS_Z_N()
{
	return this->toNatural();
}
NaturalNumber Integer::toNatural()
{
	NaturalNumber result(this->digitBlocks);
	return result;
}
NaturalNumber TRANS_Z_N(Integer const& source)
{
	return source.toNatural();
}
