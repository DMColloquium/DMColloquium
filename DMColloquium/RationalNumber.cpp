//
//  RationalNumber.cpp
//  DMColloquium
//
//  Created by Ilya Kulebyakin on 4/28/15.
//  Copyright (c) 2015 Ilya Kulebyakin. All rights reserved.
//

#include "RationalNumber.h"

RationalNumber::RationalNumber() {
    numerator = Integer();
    denominator = NaturalNumber();
    //denominator.ADD_1N_N();
}

//Q-7 Науменко и Смагин
//Умножение дробей
RationalNumber RationalNumber::MUL_QQ_Q(RationalNumber r)
{
	RationalNumber n;
	n.numerator = numerator.MUL_ZZ_Z(r.numerator);//Умножение целых чисел
	n.denominator = denominator.MUL_NN_N(r.denominator);//умножение натуральных чисел
	n = RED_Q_Q(n);//сокращение дроби
	return (n);
}
