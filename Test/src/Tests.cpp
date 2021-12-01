#include "../include/Tests.h"

void Tests::setUp()
{
	m_lotto = new Lottery();
}

void Tests::tearDown()
{
	delete m_lotto;
}

void Tests::has6Numbers()
{
	for(int i = 1; i < 7; i++)
	{
		m_lotto->numbers.push_back(i);
	}

	CPPUNIT_ASSERT(m_lotto->numCheck() == true);
	CPPUNIT_ASSERT(m_lotto->sizeCheck() == true);

	std::cout << "Lottory has 6 numbers, Test Passed\n" << std::endl;
}

void Tests::inRangeTest()
{
	for(int i = 1; i < 7; i++)
	{
		m_lotto->numbers.push_back(i);
	}

	CPPUNIT_ASSERT(m_lotto->range() == true);

	std::cout << "Lottory numbers in range, Test Passed\n" << std::endl;
}

void Tests::repetitionTest()
{
	for(int i = 1; i < 7; i++)
	{
		m_lotto->numbers.push_back(i);
	}

	CPPUNIT_ASSERT(m_lotto->repetition() == false);

	std::cout << "Lottory numbers don't repeat, Test Passed\n" << std::endl;
}

CppUnit::TestSuite* Tests::suite()
{
	CppUnit::TestSuite* tests = new CppUnit::TestSuite("Tests");

	tests->addTest(new CppUnit::TestCaller<Tests>("has6Numbers", &Tests::has6Numbers));

	tests->addTest(new CppUnit::TestCaller<Tests>("inRangeTest", &Tests::inRangeTest));

	tests->addTest(new CppUnit::TestCaller<Tests>("repetitionTest", &Tests::repetitionTest));

	return tests;
}