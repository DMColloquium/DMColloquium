//
//  RationalNumber.cpp
//  DMColloquium
//
//  Created by Ilya Kulebyakin on 4/28/15.
//  Copyright (c) 2015 Ilya Kulebyakin. All rights reserved.
//

#include "RationalNumber.h"

RationalNumber RationalNumber::SUB_QQ_Q(RationalNumber rat_num_2)
{
	//
	//  SUB_QQ_Q
	//  DMColloquium
	//
	//  Created by Dmitry Konstantinov, Dmitry Azarov & Tuyaara Fedorova on 8/7/15.
	//
	RationalNumber result;
	result.denominator=denominator.LCM_NN_N(rat_num_2.denominator);
	this->numerator = this->numerator.MUL_ZZ_Z(this->numerator.TRANS_N_Z(result.denominator.DIV_NN_N(this->denominator)));
	rat_num_2.numerator = rat_num_2.numerator.MUL_ZZ_Z(rat_num_2.numerator.TRANS_N_Z(result.denominator.DIV_NN_N(rat_num_2.denominator)));
	result.numerator = this->numerator.SUB_ZZ_Z(rat_num_2.numerator);
	return result;
}
