#include "../include/Lottery.h"


int main()
{
	Lottery lotto;
	int tempNum;

	for(int i = 0; i < 6; i++)
	{
		std::cout << "Enter Number " << i + 1 << ": ";
		std::cin >> tempNum;
		lotto.numbers.push_back(tempNum);
		std::cout << std::endl;
	}

	if(lotto.range() && lotto.repetition() == false)
	{
		std::cout << "Lotto Numbers ";
		for(int i = 0; i < 6; i++)
		{
			std::cout << lotto.numbers.at(i) << ", ";
		}
		std::cout << "are valid" << std::endl;
	}
	else if(!lotto.range())
	{
		std::cout << "Lotto numbers invalid: number out of range" << std::endl;
	}
	else if(lotto.repetition())
	{
		std::cout << "Lotto numbers invalid: number repeated" << std::endl;
	}

	system("pause");
	return 0;
}
