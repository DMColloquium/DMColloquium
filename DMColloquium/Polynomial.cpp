//
//  Polynomial.cpp
//  DMColloquium
//
//  Created by Ilya Kulebyakin on 4/28/15.
//  Copyright (c) 2015 Ilya Kulebyakin. All rights reserved.
//

#include "Polynomial.h"
using namespace std;


Polynomial const Polynomial::MUL_PP_P(Polynomial const& second) const
{
    Polynomial newPolynomials[this->coefficients.size()];

    for (int i = 0; i < this->coefficients.size(); ++i)
    {
        newPolynomials[i] = this->MUL_Pxk_P(second, this->coefficients.size() - i - 1);
        newPolynomials[i] = this->MUL_P_Q(newPolynomials[i], this->coefficients[i]);
        //newPolynomials[i].MUL_P_Q(this->coefficients[i]);
    }

    Polynomial result;
    for (int i = 0; i < this->coefficients.size(); ++i)
        result = this->ADD_PP_P(result, newPolynomials[i]);
        //result.ADD_PP_P(newPolynomials[i]);
}
