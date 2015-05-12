//
//  Polynomial.cpp
//  DMColloquium
//
//  Created by Ilya Kulebyakin on 4/28/15.
//  Copyright (c) 2015 Ilya Kulebyakin. All rights reserved.
//

#include "Polynomial.h"
using namespace std;

/* Автор: Фёдорова Елизавета 4302 */
NaturalNumber Polynomial::DEG_P_N()
{
	NaturalNumber result(0);

	for (int i = 1; i < this->coefficients.size(); ++i)
		result.ADD_1N_N();

	return result;
}
NaturalNumber Polynomial::DEG_P_N(Polynomial const& source)
{
	return source.DEG_P_N();
}
NaturalNumber DEG_P_N(Polynomial const& source)
{
	return source.DEG_P_N();
}
