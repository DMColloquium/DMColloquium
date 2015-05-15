//
//  NaturalNumber.h
//  DMColloquium
//
//  Created by Ilya Kulebyakin on 4/28/15.
//  Copyright (c) 2015 Ilya Kulebyakin. All rights reserved.
//

#ifndef __DMColloquium__NaturalNumber__
#define __DMColloquium__NaturalNumber__

#include <vector>



class NaturalNumber
{
protected:
    // you must only use first 9 digits of each int.
    // So, if a number is: 12345678901234 than
    // digitBlocks[1] = 12345
    // digitBlocks[0] = 678901234
    std::vector<unsigned int> digitBlocks;

public:
    NaturalNumber();
    NaturalNumber(unsigned int number) : digitBlocks{number} {};
    NaturalNumber(std::vector<unsigned int> digits) : digitBlocks{digits} {};
    NaturalNumber ADD_1N_N();
    
    // put declarations-ONLY for each method below

    // Модицируют *this, возвращают *this
    NaturalNumber const MUL_Nk_N(unsigned int);
    NaturalNumber& operator *=(unsigned int);
    // Модифицирует *this, возвращает успех/неуспех
    bool MUL_Nk_Nb(unsigned int);
    // Просто работают
    friend NaturalNumber const operator *(NaturalNumber const&, unsigned int);
    friend NaturalNumber const operator *(unsigned int, NaturalNumber const&);

    /**
    * @brief Validate natural number
    * @return False, if digitBlocks is empty vector or zero. True, otherwise.
    */
    bool check() const;
    /**
    * @brief Validate natural number for bad
    * @return True, if digitBlocks is empty vector or zero. False, otherwise.
    */
    bool bad() const;
    /**
     * @brief Comparison operators for natural numbers
     */
    friend bool operator ==(NaturalNumber const&, NaturalNumber const&);
    friend bool operator !=(NaturalNumber const&, NaturalNumber const&);
};

#endif /* defined(__DMColloquium__NaturalNumber__) */
