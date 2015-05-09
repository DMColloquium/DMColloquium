//
//  Integer.cpp
//  DMColloquium
//
//  Created by Ilya Kulebyakin on 4/28/15.
//  Copyright (c) 2015 Ilya Kulebyakin. All rights reserved.
//

#include "Integer.h"
Integer Integer::MUL_ZZ_Z(Integer &obj){
    Integer result;//need a constructor to make isPositive=true as a default?
    if(POZ_Z_D(this) == 0 || POZ_Z_D(obj) == 0){
        return result;
    }else if (POZ_Z_D(this)==POZ_Z_D(obj)){
        result.isPositive = true;
        return result.ABS_Z_N(this->MUL_NN_N(obj));
    }else{
        result = this->MUL_NN_N(obj);
        result.isPositive = false;
    }
    
    return result;
}
