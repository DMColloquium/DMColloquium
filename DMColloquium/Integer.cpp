
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

Integer SUB_ZZ_Z(Integer n)
{
	if (this->POZ_Z_D == 0 && n.POZ_Z_D != 0) return Integer(n.MUL_Z-_Z);
	if (this->POZ_Z_D != 0 && n.POZ_Z_D == 0) return *this;
	if (n.POZ_Z_D == 0) return *this;
	if (this->POZ_Z_D == 1 && n.POZ_Z_D == 1) 
	{
		this->ABS_Z_N;
		n.ABS_Z_N;
		if (this->COM_NN_D(n) == 2 || this->COM_NN_D(n) == 0) return Integer(this->SUB_NN_N(n), true);
		else if (this->COM_NN_D(n) == 1) return Integer(n.SUB_NN_N(*this), false);
	}
	if (this->POZ_Z_D == -1 && n.POZ_Z_D == 1)
	{
		this->ABS_Z_N;
		n.ABS_Z_N;
		return Integer(return this->ADD_NN_N(n),false);
	}
	if (this->POZ_Z_D == 1 && n.POZ_Z_D == -1)
	{
	this->ABS_Z_N;
	n.ABS_Z_N;
	return Integer(return this->ADD_NN_N(n),true);
	}
	if (this->POZ_Z_D == -1 && n.POZ_Z_D == -1)
	{
		this->ABS_Z_N;
		n.ABS_Z_N;
		if (this->COM_NN_D(n) == 2 || this->COM_NN_D(n) == 0) return Integer(this->SUB_NN_N(n), false);
		else if (this->COM_NN_D(n) == 1) return Integer(n.SUB_NN_N(*this), true);
	}
}