//
//  RationalNumber.cpp
//  DMColloquium
//
//  Created by Ilya Kulebyakin on 4/28/15.
//  Copyright (c) 2015 Ilya Kulebyakin. All rights reserved.
//

#include "RationalNumber.h"

#ifdef USE_FAKE
    #include "fakeFunctions.hpp"
#endif

RationalNumber::RationalNumber()
{
    numerator = Integer();
    denominator = NaturalNumber(1);
}

RationalNumber::RationalNumber(RationalNumber const& source)
{
    this->numerator = source.numerator;
    this->denominator = source.denominator;
}

/*
 * 4302 Levchenko
 * \{begin block}
 *
 * IDE: CodeLite 7.0
 * Compiler: GCC (TDM-2) 4.8.1
 * Linker: GCC (TDM-2) 4.8.1
 * Debugger: GDB 7.6.1
 *
 * If there are problems with the compilation, you must enable support C++11.
 * (example for GCC: add -std=c++11 options)
 * 
 * date of beginning: 10.05.2015 17:07 (UTC+3)
 * date of    ending: 10.05.2015 18:38 (UTC+3)
 */
RationalNumber const RationalNumber::ADD_QQ_Q(RationalNumber const& first, RationalNumber const& second) const
{
    return first + second;
}

RationalNumber const ADD_QQ_Q(RationalNumber const& first, RationalNumber const& second)
{
    RationalNumber result(Integer(0), NaturalNumber(0));

    if (first.bad() || second.bad())
        return result;

    NaturalNumber lcm = LCM_NN_N(first.denominator, second.denominator); // Находим НОК знаменателей

    NaturalNumber const* denom[2];  // Небольшой хак для удобства
    denom[0] = &first.denominator;  // Теперь можно обращаться к знаменателям
    denom[1] = &second.denominator; // дробей по индексу, а не именам дробей

    NaturalNumber coef[2] = {NaturalNumber(1), NaturalNumber(1)}; // Множители для дробей, дабы получить НОК
    NaturalNumber const one({1});                                     // Единица для прибавления к коэффициенту
    for (short int i = 0; i < 2; i++)
    {
        result.denominator = *denom[i];
        while (result.denominator != lcm) // В случае ошибок в функции ADD_ZZ_Z этот цикл уйдёт в бесконечность
        {
            // coef[i] += one;
            coef[i] = ADD_ZZ_Z(coef[i], one);
            //result.denominator += result.denominator;
            result.denominator = ADD_ZZ_Z(result.denominator, result.denominator);
        }
    }
    /*
     * В результате цикла выше знаменатель результирующей дроби равен НОК,
     * а массив coef[] хранит в себе множители для обеих дробей
     */

    //result.numerator = (first.numerator * coef[0]) + (second.numerator * coef[1]);
    result.numerator = ADD_ZZ_Z(MUL_ZZ_Z(first.numerator, coef[0]),
                                MUL_ZZ_Z(second.numerator, coef[1]));

    return result;
}

RationalNumber const operator +(RationalNumber const& left, RationalNumber const& right)
{
    return ADD_QQ_Q(left, right);
}

RationalNumber& RationalNumber::operator +=(RationalNumber const& right)
{
    ADD_QQ_Qb(*this, right);
    return *this;
}

bool RationalNumber::ADD_QQ_Qb(RationalNumber const& first, RationalNumber const& second)
{
    if (first.bad() || second.bad())
        return false;

    *this = first + second;
    return true;
}

bool RationalNumber::ADD_QQ_Q(RationalNumber const& right)
{
    if (this->bad() || right.bad())
        return false;

    *this += right;
    return true;
}

bool RationalNumber::check() const
{
    return numerator.bad() || denominator.bad();
}

bool RationalNumber::bad() const
{
    return !check();
}
/*
 * 4302 Levchenko
 * \{end block}
 */
