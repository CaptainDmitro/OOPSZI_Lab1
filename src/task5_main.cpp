#include <iostream>
#include <math.h>

using namespace std;



int main()
{
	double x, y;

	cin >> x;
	y = 1 - (1/4 * pow(sin(2*x), 2)) + cos(2*x);

	printf("x = %f\n", x);
	printf("f = %f\n", y);
	
	return 0;
}
