#include <vector>
#include <iostream>

class Lottery{
public:
	Lottery() {};
	bool sizeCheck();
	bool numCheck();
	bool range();
	bool repetition();
	std::vector<int> numbers;
};
