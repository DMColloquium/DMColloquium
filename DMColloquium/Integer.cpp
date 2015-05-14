//
//  Integer.cpp
//  DMColloquium
//
//  Created by Ilya Kulebyakin on 4/28/15.
//  Copyright (c) 2015 Ilya Kulebyakin. All rights reserved.
//

#include "Integer.h"
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

Integer Integer::ADD_ZZ_Z(Integer n) {
	if (this->POZ_Z_D == 0) return n;
	if (n.POZ_Z_D == 0) return *this;
	if (this->POZ_Z_D == 1 && n.POZ_Z_D == 1) 
		return Integer(this->ADD_NN_N(n), true);
	if (this->POZ_Z_D == -1 && n.POZ_Z_D == 1)
	{
		if (this->COM_NN_D(n) == 1) return Integer(n.SUB_NN_N(this->ABS_Z_N()), true);
		else if (this->COM_NN_D(n) == 0) return Integer();
		else if (this->COM_NN_D(n) == 2) return Integer(this->ABS_Z_N->SUB_NN_N(n), false);
	}
	if (this->POZ_Z_D == 1 && n.POZ_Z_D == -1)
	{
		if (this->COM_NN_D(n) == 1) return Integer(n.ABS_Z_N.SUB_NN_N(this), false);
		else if (this->COM_NN_D(n) == 0) return Integer();
		else if (this->COM_NN_D(n) == 2) return Integer(this->SUB_NN_N(n.ABS_Z_N()), false);
	}
	if (this->POZ_Z_D == -1 && n.POZ_Z_D == -1)
		return Integer(this->ABS_Z_N->ADD_NN_N(n.ABS_Z_N), false);
}
