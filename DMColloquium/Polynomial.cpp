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

Polynomial::DER_P_P()
{
	Polynomial DER;
	int i = 0;
	NaturalNumber abc;
	DER = *this;
	for (i = 0; i<(coefficients.size()-1); i++)
	{
		abc=abc.ADD_1N_N();
		DER.coefficients[i] = DER.coefficients[i + 1].MUL_QQ_Q(abc.TRANS_N_Q());
	}
	return DER;	
}