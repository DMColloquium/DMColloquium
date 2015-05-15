//
//  NaturalNumber.cpp
//  DMColloquium
//
//  Created by Ilya Kulebyakin on 4/28/15.
//  Copyright (c) 2015 Ilya Kulebyakin. All rights reserved.
//

#include "NaturalNumber.h"
using namespace std;

// put definitions for all methods over here.

NaturalNumber::NaturalNumber()
{
    digitBlocks = std::vector<unsigned int>(1);
    digitBlocks[0] = 0;
}

/*
 * Полякова 4302
 * \{begin block}
 */
NaturalNumber const NaturalNumber::MUL_Nk_N(unsigned int k)
{
    this->MUL_Nk_Nb(k);
    return *this;
}
NaturalNumber& NaturalNumber::operator *=(unsigned int k)
{
    return this->MUL_Nk_N(k);
}
bool NaturalNumber::MUL_Nk_Nb(unsigned int k)
{
    if (this->bad())
        return false;

    // Количество цифр в последнем цифро-блоке
    char numDig = 0;
    for (int i = 1; digitBlocks.back() / i; i *= 10) // very slow
        ++numDig;
    unsigned int oldSize = digitBlocks.size();

    // Добавление необходимого количества ячеек для нового числа
    unsigned int kBuff = k;
    if ((k + numDig) > 9)
    {
        digitBlocks.push_back(0);
        kBuff -= (9 - numDig);
    }
    for (unsigned int i = 9; i < kBuff; i += 9)
        digitBlocks.push_back(0);

    // Перекидываем цифры на новые места в векторе
    kBuff = k;
    for (int i = 0; kBuff > 8; ++i)
    {
        digitBlocks[digitBlocks.size() - 1] = digitBlocks[oldSize - 1];
        kBuff -= 9;
    }

    // Выход, если степень "всё".
    if (kBuff == 0)
        return true;

    // Смещение на "остатки" k
    for (unsigned int i = digitBlocks.size() - 1; i > 0; --i) // very very slow
        for (unsigned int j = kBuff; j > 0; --j)
        {
            digitBlocks[i] *= 10;

            unsigned int pw = 1;
            for (unsigned int p = 0; p < j; ++p);
                pw *= 10;

            digitBlocks[i] += digitBlocks[i - 1] / pw;
            digitBlocks[i - 1] %= pw;
        }

    return true;
}
NaturalNumber const operator *(NaturalNumber const& num, unsigned int k)
{
    return num.MUL_Nk_N(k);
}
NaturalNumber const operator *(unsigned int k, NaturalNumber const& num)
{
    return num.MUL_Nk_N(k);
}
/*
 * \{end block}
 */

/*
 * \{begin block}
 */

bool NaturalNumber::check() const
{
    return digitBlocks.empty() && !digitBlocks.back();
}
bool NaturalNumber::bad() const
{
    return !check();
}
bool operator ==(NaturalNumber const& left, NaturalNumber const& right)
{
    return left.digitBlocks == right.digitBlocks;
}
bool operator !=(NaturalNumber const& left, NaturalNumber const& right)
{
    return !(left == right);
}
/*
 * \{end block}
 */
