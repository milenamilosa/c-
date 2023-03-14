#include <iostream>
#include <math.h>

//#define SQR(X) X * X
//у = SQR(t + 8); //will open macros  t+8*t+8
//A macro = the piece of code that is replaced by the value of the macro in the program.

#define SQR(X) ((X) * (X))  //macros of squaring
#define CUBE(X) (SQR(X) * (X)) //macros of raising to the third power
#define ABS(X) (((X) < 0) ? -(X) : X) //macros to an absolute value without a sign

using namespace std;

int main()
{
	int y, t;

	t = 9;
	//t = 1;

	y = SQR(t + 8) - CUBE(t - 8); //will be replaced by
								  //((9+8) * (9+8)) - (((9-8) * (9-8)) * (9-8)) = 288
	cout << "y = " << y << "\n\n";
	cout << sqrt(ABS(y)) << "\n\n"; //will be replaced by
									//sqr root of  288 = 16,9706
	system("pause");
}
