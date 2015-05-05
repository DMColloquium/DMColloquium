//
//  Integer.cpp
//  DMColloquium
//
//  Created by Ilya Kulebyakin on 4/28/15.
//  Copyright (c) 2015 Ilya Kulebyakin. All rights reserved.
//

#include "Integer.h"
Integer Integer::MULL_ZZ_Z(Integer x1, Integer x2){
    Integer result;//need a constructor to make isPositive=true as a default?
    if(POZ_Z_D(x1) == 0 || POZ_Z_D(x2) == 0){
        return result;
    }else if (POZ_Z_D(x1)==POZ_Z_D(x2)){
        result.isPositive = true;
        return ABS_Z_N(MUL_NN_N(x1,x2));//x1 and x2 are Integers
    }else{
        result = MUL_NN_N(x1,x2);
        result.isPositive = false;
    }
    return result;
}