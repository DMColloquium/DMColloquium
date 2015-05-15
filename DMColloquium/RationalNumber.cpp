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

//Q-7
//Умножение дробей
RationalNumber RationalNumber::MUL_QQ_Q(RationalNumber n)
{
	RationalNumber n3;
	n3.numerator = numerator.MUL_ZZ_Z(n.numerator);//Умножение целых чисел
	n3.denominator = denominator.MUL_NN_N(n.denominator);//умножение натуральных чисел
	n3 = RED_Q_Q(n3);//сокращение дроби
	return (n3);
}
