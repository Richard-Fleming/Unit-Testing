#include <iostream>

#include "../include/Tests.h"
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>
#include <cppunit/BriefTestProgressListener.h>

int main()
{
	CppUnit::TestResult controller;
	
	CppUnit::TestResultCollector result;
	controller.addListener(&result);

	CppUnit::BriefTestProgressListener progressListener;
	controller.addListener(&progressListener);

	CppUnit::TextUi::TestRunner runner;
	runner.addTest(Tests::suite());

	std::cout << "RUNNING LOTTORY TESTS" << std::endl;
	runner.run(controller);

	CppUnit::CompilerOutputter outputter(&result, std::cerr);
	outputter.write();

	system("pause");
	return result.wasSuccessful() ? 0 : 1;
}