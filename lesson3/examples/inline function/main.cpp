#include <iostream>
#include <math.h>

using namespace std;

// inline function
//When the inline function is called whole code of the inline function gets inserted or substituted at the point of
//the inline function call.

//inline return-type function-name(parameters)
//{
//    function code
//}

inline float module(float x = 0, float у = 0)
{
	return sqrt(x * x + у * у);
}

int main()
{
	float a = 1.5f, b = 2.4f, c;
	cout << "Start" << "\n\n";

	cout << a << " " << b << "\n\n";

	c = module(a, b); //Подстановка тела функции module корень квадратный(1.5 * 1.5 + 2.4 * 2.4)

	cout << c << "\n\n";

	c = module(a); //Подстановка тела функции module корень квадратный(1.5 * 1.5 + 0 * 0)

	cout << c << "\n\n";

	c = module(0, b); //Подстановка тела функции module корень квадратный(0 * 0 + 2.4 * 2.4)

	cout << c << "\n\n";

	cout << "End" << "\n";
}
