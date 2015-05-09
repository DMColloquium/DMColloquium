//
//  Integer.h
//  DMColloquium
//
//  Created by Ilya Kulebyakin on 4/28/15.
//  Copyright (c) 2015 Ilya Kulebyakin. All rights reserved.
//

#ifndef __DMColloquium__Integer__
#define __DMColloquium__Integer__

#include "NaturalNumber.h"

#endif /* defined(__DMColloquium__Integer__) */


class Integer : public NaturalNumber {
private:
    bool isPositive;
public:
    Integer MUL_ZZ_Z(Integer &obj);//x1 - openand 1, x2 - operand2
    // All declarations go here
};
