#include <iostream>
#include <assert.h>

#include "../include/Tests.h"

using namespace std;

int main()
{
	Tests t;

	int a = 10;

	cout << t.someMethod(a) << endl;
	assert(t.someMethod(a) == 0);
	assert(t.someMethod(a) == 1);
	cin.get();
	return 0;
}