#include <iostream>
#include <math.h>

using namespace std;

double f(double x);

int main()
{
	double x, y;

	cin >> x;
	y = f(x);

	printf("x = %f\n", x);
	printf("y = %f\n", y);
	
	system("pause");
	return 0;
}

double f(double x)
{
	return 1 - (1/4 * pow(sin(2*x), 2)) + cos(2*x);
}
