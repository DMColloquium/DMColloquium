//
//  Integer.cpp
//  DMColloquium
//
//  Created by Ilya Kulebyakin on 4/28/15.
//  Copyright (c) 2015 Ilya Kulebyakin. All rights reserved.
//

#include "Integer.h"
#include "stdafx.h"
using namespace std;

Integer::Integer() {
    digitBlocks = vector<unsigned int>(1);
    digitBlocks[0] = 0;
    isPositive = true;
}

Integer::Integer(vector<unsigned int> digits, bool isPositive) {
    digitBlocks = digits;
    this->isPositive = isPositive;
}

//Z-9 Науменко и Смагин
//Остаток от деления большего целого числа на меньшее или равное натуральное
Integer MOD_ZZ_Z(Integer a, NaturalNumber b)
{
	return SUB_ZZ_Z(a, MUL_ZZ_Z(TRANS_N_Z(b), DIV_ZZ_Z(a, b)));
}
