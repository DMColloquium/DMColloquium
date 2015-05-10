#ifndef __DMColloquium__NaturalNumber__
#define __DMColloquium__NaturalNumber__

#include <vector>

class NaturalNumber {
protected:
    std::vector <unsigned int> digitBlocks;
public:
	NaturalNumber();
	NaturalNumber(std::vector <unsigned int> digits) : digitBlocks{ digits } {};
	int COM_NN_D(NaturalNumber);
};

#endif /* defined(__DMColloquium__NaturalNumber__) */
