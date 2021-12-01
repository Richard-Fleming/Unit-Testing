#include "../include/Lottery.h"

bool Lottery::sizeCheck()
{
	if(numbers.size() != 6)
	{
		return false;
	}
	return true;
}

bool Lottery::numCheck()
{
	for(int i = 0; i < numbers.size(); i++)
	{
		if(numbers.at(i) == NULL)
		{
			return false;
		}
	}
	return true;
}

bool Lottery::range()
{
	for(int i = 0; i < numbers.size(); i++)
	{
		if(numbers.at(i) < 1 || numbers.at(i) > 46)
		{
			return false;
		}
	}
	return true;
}

bool Lottery::repetition()
{
	int occurrences = 0;
	for(int i = 0; i < numbers.size(); i++)
	{
		occurrences = 0;
		for(int j = 0; j < numbers.size(); j++)
		{
			if(numbers.at(i) == numbers.at(j))
			{
				occurrences++;
			}
			if(occurrences > 1)
			{
				return true;
			}
		}
	}
	return false;
}