#include <iostream>
#include <math.h>

using namespace std;

void f();
double x, result;

int main()
{
	cin >> x;
	f();

	printf("x = %f\n", x);
	printf("result = %f\n", result);
	
	return 0;
}

void f()
{
	result = 1 - (1/4 * pow(sin(2*x), 2)) + cos(2*x);
}
