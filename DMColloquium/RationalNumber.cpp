#include "RationalNumber.h"

RationalNumber::RationalNumber() {
	numerator = Integer();
	denominator = NaturalNumber();
}

RationalNumber RationalNumber::DIV_QQ_Q(RationalNumber n) {
	// this function devides one rational number by another
	RationalNumber nt;
	nt.numerator = this->numerator.MUL_ZZ_Z(Integer(n.denominator, true));
	nt.denominator = n.numerator.MUL_ZZ_Z(Integer(this->denominator, true)), true;	
	return nt;
}
