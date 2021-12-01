#include <TestFixture.h>
#include <TestAssert.h>
#include <TestCase.h>
#include <TestSuite.h>
#include <TestCaller.h>
#include "../../Production/include/Lottery.h"

class Tests : CppUnit::TestFixture{
public:
	Lottery* m_lotto;
	static CppUnit::TestSuite* suite();
	void setUp();
	void tearDown();
	void has6Numbers();
	void inRangeTest();
	void repetitionTest();
};
