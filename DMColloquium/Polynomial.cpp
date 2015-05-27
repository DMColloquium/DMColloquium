//
//  Polynomial.cpp
//  DMColloquium
//
//  Created by Ilya Kulebyakin on 4/28/15.
//  Copyright (c) 2015 Ilya Kulebyakin. All rights reserved.
//

#include "Polynomial.h"
Polynomial Polynomial::ADD_PP_P(Polynomial p2)
{
	int i;
	if (this->coefficients.size() > p2.coefficients.size())
	{
		for (i = 0; i < p2.coefficients.size(); i++)
			this->coefficients[i] = this->coefficients[i].ADD_QQ_Q(p2.coefficients[i]);
		return *this;
	}
	else
	{
		for (i = 0; i < this->coefficients.size(); i++)
			p2.coefficients[i] =p2.coefficients[i].ADD_QQ_Q(p2.coefficients[i]);
		return p2;
	}
}
