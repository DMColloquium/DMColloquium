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



std::vector<RationalNumber>Polynomial:: GCF_PP_P(int degree1, std::vector<RationalNumber> coeff_p1, int degree2, std::vector<RationalNumber> coeff_p2)
{
	std::vector<RationalNumber> a,b;
	a = coeff_p1;
	b = coeff_p2;
	while (mov_pp__p(a, b) != 0)/*остаток от деления мн-на на многочлен*/
	{
		a = mov_pp__p(a, b);
		a.swap(b);

	}
	return b;

}