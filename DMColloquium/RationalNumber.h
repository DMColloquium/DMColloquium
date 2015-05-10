#ifndef __DMColloquium__RationalNumber__ 
#define __DMColloquium__RationalNumber__

#include "Integer.h"
#include "NaturalNumber.h"

class RationalNumber {
private:
	Integer numerator;
	NaturalNumber denominator;
public:
	RationalNumber();
	RationalNumber(Integer numerator, NaturalNumber denominator) : numerator{ numerator }, denominator{ denominator } {};
	RationalNumber DIV_QQ_Q(RationalNumber);
};

#endif /*defined(__DMColloquium__RationalNumber__)*/
