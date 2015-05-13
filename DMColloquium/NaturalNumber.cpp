
#include "NaturalNumber.h"
using namespace std;

NaturalNumber::NaturalNumber() {
    digitBlocks = std::vector<unsigned int>(1);
    digitBlocks[0] = 0;
}

int NaturalNumber::COM_NN_D(NaturalNumber n) {
	// this function compares two natural numbers:
	// if n1 = n2, function returns 0;
	// if n1 > n2, function returns 2;
	// else function returns 1
	if (this->digitBlocks == n.digitBlocks) return 0;
	if (this->digitBlocks.size() > n.digitBlocks.size()) return 2; 
	if (this->digitBlocks.size() == n.digitBlocks.size()) {
		int i = this->digitBlocks.size() - 1;
		for (int j = i; j > -1; --j) {
			if (this->digitBlocks[j] > n.digitBlocks[j])
				return 2;
			else if (this->digitBlocks[j] < n.digitBlocks[j])
				return 1;
		}
	}
	return 1; 
}
