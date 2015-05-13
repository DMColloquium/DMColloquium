#ifndef __DMColloquium__NaturalNumber__
#define __DMColloquium__NaturalNumber__

#include <vector>

class NaturalNumber {
protected:
    // you must only use first 9 digits of each int.
    // So, if a number is: 12345678901234 than
    // digitBlocks[1] = 12345
    // digitBlocks[0] = 678901234
    std::vector<unsigned int> digitBlocks;
public:
    NaturalNumber();
    NaturalNumber(std::vector<unsigned int> digits):digitBlocks{digits}{};
    NaturalNumber ADD_1N_N();
    int COM_NN_D(NaturalNumber);
};

#endif /* defined(__DMColloquium__NaturalNumber__) */
