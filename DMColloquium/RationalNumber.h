//
//  RationalNumber.h
//  DMColloquium
//
//  Created by Ilya Kulebyakin on 4/28/15.
//  Copyright (c) 2015 Ilya Kulebyakin. All rights reserved.
//

#ifndef __DMColloquium__RationalNumber__
#define __DMColloquium__RationalNumber__

#include "Integer.h"
#include "NaturalNumber.h"



class RationalNumber
{
private:
    Integer numerator;
    NaturalNumber denominator;

public:
    // Instanciates a rational number (0/1)
    RationalNumber();
    RationalNumber(RationalNumber const&);
    RationalNumber(Integer numerator, NaturalNumber denominator) : numerator{numerator}, denominator{denominator} {};
    // declarations for methods

    /**
    * @brief Summ of two rational number
    * @param First rational number
    * @param Second rational number
    * @return Result rational number. If any of the source rational number are wrong, the result will be 0/0
    */
    RationalNumber const ADD_QQ_Q(RationalNumber const&, RationalNumber const&) const;
    friend RationalNumber const ADD_QQ_Q(RationalNumber const&, RationalNumber const&);
    friend RationalNumber const operator +(RationalNumber const&, RationalNumber const&);
    /**
    * @brief Adds one to the left rational number right rational number.
    * @param Right addend (rational number)
    * @return Result rational number (*this). If any of the source rational number are wrong, the left rational number will not be changed.
    */
    RationalNumber& operator +=(RationalNumber const&);
    /**
    * @brief Summ of two rational number
    * @param First rational number
    * @param Second rational number
    * @return Returns false if one of the source rational numbers are wrong, true otherwise. The result of sum will be written in *this if true, nothing otherwhise.
    */
    bool ADD_QQ_Qb(RationalNumber const&, RationalNumber const&);
    /**
    * @brief Adds one to the this rational number right rational number.
    * @param Rational number for adding
    * @return Returns false if one of the source rational numbers (*this or param) are wrong, true otherwise. The result of sum will be written in *this if true, nothing otherwhise.
    */
    bool ADD_QQ_Q(RationalNumber const&);
    /**
    * @brief Validate rational number
    * @return False, if nominator or denominator are empty vectors or denominator is zero. True, otherwise.
    */
    bool check() const;
    /**
    * @brief Validate rational number for bad
    * @return True, if nominator or denominator are empty vectors or denominator is zero. False, otherwise.
    */
    bool bad() const;

};

#endif
