#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double x, f;

	x = 5;
	f = 1 - (1/4 * pow(sin(2*x), 2)) + cos(2*x);

	printf("x = %f\n", x);
	printf("f = %f\n", f);

	cin >> x;
	f = 1 - (1/4 * pow(sin(2*x), 2)) + cos(2*x);

	printf("x = %f\n", x);
	printf("f = %f\n", f);
	
	return 0;
}
