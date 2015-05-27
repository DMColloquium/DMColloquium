//
//  NaturalNumber.cpp
//  DMColloquium
//
//  Created by Ilya Kulebyakin on 4/28/15.
//  Copyright (c) 2015 Ilya Kulebyakin. All rights reserved.
//

#include "NaturalNumber.h"

// put definitions for all methods over here.

/// This is just an example of how to get going. Doesn't make any sense
NaturalNumber NaturalNumber::greatestCommonFactor(NaturalNumber secondNumber){
    return *this;
}

NaturalNumber NaturalNumber::SUB_NN_N(NaturalNumber nat_num2)
{
	int i;
	if (this->COM_NN_D(nat_num2)==2)
	{
		for (i = 0; i < this->digitBlocks.size(); i++)
		{
			while (this->digitBlocks[i]<nat_num2.digitBlocks[i])
			{
				this->digitBlocks[i + 1]--;
				this->digitBlocks[i] += 1000000000;
			};
			this->digitBlocks[i] -= nat_num2.digitBlocks[i];
		}
	}
	else
	{
		cout << "Error!";
	}
	return *this;
}
