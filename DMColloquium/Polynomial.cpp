//
//  Polynomial.cpp
//  DMColloquium
//
//  Created by Ilya Kulebyakin on 4/28/15.
//  Copyright (c) 2015 Ilya Kulebyakin. All rights reserved.
//

#include "Polynomial.h"
using namespace std;
Polynomial::Polynomial() {
    coefficients = vector<RationalNumber>(1);
}

Polynomial Polynomial::DIV_PP_P(Polynomial Divisor)
{
	if (this->DEG_P_N().COM_NN_D(Divisor.DEG_P_N())!=1) //If Dividend's degree more than divisor's
	{
		Polynomial Quotient;
		Quotient.coefficients[0] = this->LED_P_Z().DIV_QQ_Q(Divisor.LED_P_Z); //Quotient = Dividend's lead coefficient / Divisor's lead coefficient
		Quotient = Quotient.MUL_Pxk_P(this->DEG_P_N().SUB_NN_N(Divisor.DEG_P_N())); //Quotient = Quotient * x^(Dividend's degree - Divisor's degree)
		return Quotient.ADD_PP_P(this->SUB_PP_P(Divisor.MUL_PP_P(Quotient)).DIV_PP_P(Divisor)); //Return Quotient + (Dividend - Divisor * Quotient) / Divisor
	}
	else return Polynomial(); //Else return null polynomial
}